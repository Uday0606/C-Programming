#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter a number\n");
    scanf("%d",&num);

    int sign=(num<0)?-1:1;
    num=num*sign;

    if(num==0)
    {
        printf("1\n");
        return 0;
    }

    while(num)
    {
        count++;
        num/=10;
    }
    printf("%d\n",count);
    return 0;
}