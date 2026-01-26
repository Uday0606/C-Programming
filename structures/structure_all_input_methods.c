/*
  File Name   : structure_all_input_methods.c
  Description : Demonstrates all possible ways of using structures in C.
                1. Direct initialization at declaration (Department)
                2. User input using structure pointer (Student, Employee)
                3. Hard-coded assignment after declaration (College)
                4. Passing structure by value and by pointer
 */
 


#include<stdio.h>
#include<string.h>

/*department*/
typedef struct
{
    char name[50];
    int id;
}department;
/*student structure*/
typedef struct 
{
    char name[30];
    int id;
    float marks;

}student;

/*Employee structure*/
typedef struct
{
    char name[30];
    int id;
    float salary;
}employee;

/*college structure*/
typedef struct
{
    char address[50];
}college;



void input_student(student *s1);
void input_employee(employee *e1);
void print_student(student s1);
void print_employee(employee *e1);

int main()
{
    department d1={"ECE",101};
    student s1;
    employee e1;
    college c;

    strcpy(c.address,"Hyderabad");
    input_student(&s1); //pass by pointer
    input_employee(&e1);//pass by pointer

    printf("\n*Department deatils*\nDepartment name:%s\n Id:%d\n",d1.name,d1.id);
    print_student(s1);//pass by value
    print_employee(&e1);//pass by pointer
    printf("*college details*\ncollege address:%s",c.address);
    return 0;

    
}
void input_student(student *s1)
{
    printf("Enter student name:");
    fgets(s1->name,sizeof(s1->name),stdin);
    s1->name[strcspn(s1->name,"\n")]='\0';

    printf("Enter id:");
    scanf("%d",&s1->id);
    getchar();

    printf("Enter marks:");
    scanf("%f",&s1->marks);
    getchar();
}

void input_employee(employee *e1)
{
    printf("Enter employee name:");
    fgets(e1->name,sizeof(e1->name),stdin);
    e1->name[strcspn(e1->name,"\n")]='\0';

    printf("Enter id:");
    scanf("%d",&e1->id);
    getchar();
    

    printf("Enter salary:");
    scanf("%f",&e1->salary);
    getchar();
}
void print_student(student s1)
{
    printf("\n**student details**\n");
    printf("Name:%s\n",s1.name);
    printf("Id:%d\n",s1.id);
    printf("Marks:%0.2f\n",s1.marks);
    printf("\n");
}
void print_employee(employee *e1)
{
    printf("**Employee details:**\n");
    printf("Name:%s\n",e1->name);
    printf("Id:%d\n",e1->id);
    printf("Salary:%0.2f\n",e1->salary);
    printf("\n");
}