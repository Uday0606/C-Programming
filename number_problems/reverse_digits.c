/*
Problem: Reverse Digits of a Number
Example:
Input: 1234
Output: 4321
*/


#include <stdio.h>
int reverse_digits(int num);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int result=reverse_digits(num);
    printf("Reversed number:%d\n",result);
    return 0;
}

int reverse_digits(int num)
{
    int result=0;
    while(num)
    {
        int digit=num%10; //extract last digit
        result=result*10+digit;//reversed number
        num/=10;//remove last digit
    }
   return result;
}