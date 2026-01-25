#include<stdio.h>
void modify(int *p);
int main()
{
    int x=10;
    modify(&x); //pass address of variable
    printf("%d\n",x);
    return 0;
}
// function to modify variable using pointer
void modify(int *p)
{
    *p=20; //change value at the address
}