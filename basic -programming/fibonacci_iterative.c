#include<stdio.h>
int main()
{
    int a=0,b=1,next,n;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid Input\n");
        return 0;
    }

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