#include<stdio.h>
int main()
{
    int num,digit,result=0;
    printf("Enter a number\n");
    scanf("%d",&num);

    int sign=(num<0)?-1:1;
    num=num*sign;

    while(num)
    {
        digit=num%10;//extract last digit
        result=result*10+digit;
        num/=10;//remove last digit
    }
    result=result*sign;
    printf("Reversed number:%d\n",result);
    return 0;

}