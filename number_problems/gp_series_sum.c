/*
Problem: Find Sum of Geometric Progression (GP) Series

A Geometric Progression (GP) is a sequence where each term is
obtained by multiplying the previous term by a constant ratio.

Example:
GP: 2, 6, 18, 54 ...
*/
#include <stdio.h>

int main()
{
    int a,r,n,sum=0;
    printf("Enter the first term,common ratio,no.of terms\n");
    scanf("%d %d %d",&a,&r,&n);

    int term=a;
    for(int i=1;i<=n;i++)
    {
        sum+=term; //add current term
        term*=r; //generate next term
    }
    printf("sum of GP series:%d\n",sum);
    return 0;
}

