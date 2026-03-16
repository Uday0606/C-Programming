/*An Armstrong number is a number that is equal to the sum of its own digits,
each raised to the power of the number of digits.

Example:
153 → 1³ + 5³ + 3³ = 153  (Armstrong Number)*/

#include <stdio.h>

int check_armstrong(int num);
int do_power(int base,int expo);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    if(check_armstrong(num))
        printf("It is a armstrong number:%d\n",num);
    else
        printf("It is not a armstrong number:%d\n",num);

    return 0;
}
int check_armstrong(int num)
{
    int temp=num,count=0,sum=0;
    //count no.of digits
    while(temp)
    {
        count++;
        temp/=10;
    }

    temp=num;
    // calculate sum of digits raised to power of digit count
    while(temp)
    {
        int digit=temp%10;
        sum=sum+do_power(digit,count);
        temp/=10;
    }

    return sum==num;
}

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