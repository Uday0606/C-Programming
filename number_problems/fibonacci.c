/*
Problem: Print Fibonacci Series up to Nth Term

The Fibonacci sequence is a series of numbers where each number
is the sum of the two preceding ones.

Example:
0 1 1 2 3 5 8 13 ...

This program prints the Fibonacci series using two methods:
1) Iterative method (loop)
2) Recursive method
*/

#include<stdio.h>

/*Method 1: Iterative Approach*/
int main()
{
    int n,a=0,b=1,next;
    printf("Enter number of terms\n");
    scanf("%d",&n);

    while(n)
    {
        printf("%d ",a);
        next=a+b;
        a=b;
        b=next;
        n--;
    }
    return 0;
}

/*Method 2: Recursive Approach*/

/*void fibonacci(int a,int b,int n)
{
    if(n==0)
    return;
    printf("%d ",a);
    fibonacci(b,a+b,n-1);
}
int main()
{
    int n;
    printf("Enter number of terms\n");
    scanf("%d",&n);

    if(n>0)
        fibonacci(0,1,n);
    return 0;
}*/

