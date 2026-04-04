/*
Description:
Write a C program to find the sum of all numbers present
in a given string.

The program should extract numbers (including multi-digit)
from the string and return their total sum.

Example:
Input: abc123xyz45
Output: Sum of numbers: 168

Explanation:
Numbers are 123 and 45 → 123 + 45 = 168
*/
#include <stdio.h>
#include <string.h>


int sum_of_numbers(char str[]);
int main()
{
    char str[100];
    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    int result=sum_of_numbers(str);
    printf("Sum of numbers:%d\n",result);
}

int sum_of_numbers(char str[])
{
    int num=0,sum=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            num=num*10+(str[i]-'0');// build number
        }
        else
        {
            sum+=num;
            num=0;
        }
    }
        sum+=num; //last number (if string ends with digit)
        return sum;
    
}