#include<stdio.h>
void fibonacci(int a,int b,int n)
{
    if(n==0)//base case
    return;
    printf("%d ",a);
    fibonacci(b,a+b,n-1);
}
int main()
{
    int n;
    printf("Enter no.of terms\n");
    scanf("%d",&n);

    if(n>0)
    fibonacci(0,1,n);
    return 0;
}