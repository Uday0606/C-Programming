/*  This program demonstrates the basic difference between
    structure and union in C.

    Structure allocates separate memory for each member,
    so all members can store values at the same time.
 
    Union shares the same memory for all members,
    so only one member can hold a valid value at a time.
 */
#include<stdio.h>

//Each member gets its own memory 
struct data1
{
    int a;
    float b;
    char c;
    double d;
};

//All members share the same memory
union data2
{
    int a;
    float b;
    char c;
};
int main()
{
    struct data1 d1;
    union data2 d2;

    printf("size of structure: %lu bytes\n",sizeof(d1));
    printf("size of union:%lu bytes\n",sizeof(d2));

    /*structure */
    //All values exist together 
    d1.a=10;
    d1.b=5.5;
    d1.c='a';

    printf("\nstructure values\n");
    printf("a=%d\n",d1.a);
    printf("b=%.2f\n",d1.b);
    printf("c=%c\n\n",d1.c);

    /*union*/
    //Each assignment overwrites previous value
    d2.a=10;
    printf("union a=%d\n",d2.a);

    d2.b=20.5;    // overwrites a
    printf("union b=%.2f\n",d2.b);

    d2.c='A';     // overwrites b
    printf("union c=%c\n",d2.c);
     printf("union a=%d\n",d2.a);

    /*After this point only c is valid in union */

    return 0;
}