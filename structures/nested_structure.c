/*
  Nested structures using
  Student and Department with user input.
 */

#include<stdio.h>
#include<string.h>
/*Department structure*/

typedef struct
{
    char dept_name[30];
    int dept_id;
}department;

/*student structure */

typedef struct
{
    char name[30];
    int roll_no;
    float marks;
    department dept;//nested structure
}student;

void input_students(student s[],int n);
void print_students(student s[], int n);
int main()
{
    student s[2];//array of nested structures
    input_students(s,2);
    print_students(s,2);

    return 0;
}

void input_students(student s[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter details of student:%d\n",i+1);

        printf("student name: ");
        fgets(s[i].name,sizeof(s[i].name),stdin);
        s[i].name[strcspn(s[i].name,"\n")]='\0';
        
        printf("Roll Number: ");
        scanf("%d",&s[i].roll_no);
        getchar();

        printf("Enter Marks: ");
        scanf("%f",&s[i].marks);
        getchar();

        printf("Enter Department Name: ");
        fgets(s[i].dept.dept_name,sizeof(s[i].dept.dept_name),stdin);
        s[i].dept.dept_name[strcspn(s[i].dept.dept_name,"\n")]='\0';

        printf("Enter Department Id: ");
        scanf("%d",&s[i].dept.dept_id);
        getchar();
    }
}

void print_students(student s[], int n)
{
    printf("\n----student details---\n");
    for(int i=0;i<n;i++)
    {
        printf("\nstudent %d\n",i+1);
        printf("Name      :%s\n",s[i].name);
        printf("Roll no   :%d\n",s[i].roll_no);
        printf("Marks     :%.2f\n",s[i].marks);
        printf("Department:%s\n",s[i].dept.dept_name);
        printf("Dept ID   :%d\n",s[i].dept.dept_id);
    }
}