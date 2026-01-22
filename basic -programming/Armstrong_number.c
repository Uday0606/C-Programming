#include<stdio.h>

int do_power(int base,int expo)
{
    int result=1;
    while(expo)
    {
        result=result*base;
        expo--;
    }
    return result;
}

int arm_strong(int num)
{
    if(num==0)
    return 1;
    
    int temp=num,digit,count=0,sum=0;

    //count no.of digits
    while(temp)
    {
        count++;
        temp/=10;
    }

    temp=num;
    while(temp)
    {
        digit=temp%10;//extract last digit
        sum=sum+do_power(digit,count);
        temp/=10;
    }

    if(sum==num)
    {
        return 1;
    }
    else
    {
    return 0;
    }
   
}
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    int sign=(num<0)?-1:1;
    num=num*sign;

    if(arm_strong(num))
    {
        printf("It is arm strong number:%d\n",num);
    }
    else{
        printf("Not a armstrong number :%d\n",num);
    }
    return 0;
}