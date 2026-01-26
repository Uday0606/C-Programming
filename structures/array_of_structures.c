#include<stdio.h>
#include<string.h>

/*structure definitions*/
typedef struct
{
    char name[50];
    int id;
}department;

typedef struct 
{
    char name[30];
    int id;
    float marks;
}student;

void input_student(student s1[],int n);
void print_student(student s1[],int n);

int main()
{
    department d1[2]={{"ECE",101},{"CSE",102}};
    student s1[3];
   
     input_student(s1,3);//student input function


    // display department details
    for(int i=0;i<2;i++)
    { 
        printf("Department:%d\n",i+1);
        printf("Department name:%s\n ID:%d\n",d1[i].name,d1[i].id);
        printf("\n");
    }
    print_student(s1,3); //prints student details
    return 0;


}
void input_student(student s1[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter student:%d details\n",i+1);
        printf("Enter student name:");
        fgets(s1[i].name,sizeof(s1[i].name),stdin);
        s1[i].name[strcspn(s1[i].name,"\n")]='\0';

        printf("Enter id:");
        scanf("%d",&s1[i].id);
        getchar();

        printf("Enter marks:");
        scanf("%f",&s1[i].marks);
        getchar();
    }
}
void print_student(student s1[],int n)
{
    for(int i=0;i<n;i++)
    {
    printf("\nstudent:%d\n",i+1);
    printf("Name:%s\n",s1[i].name);
    printf("Id:%d\n",s1[i].id);
    printf("Marks:%0.2f\n",s1[i].marks);
    
    }
}
