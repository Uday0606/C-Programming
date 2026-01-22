#include<stdio.h>
int main()
{
    int num,digit,temp,reverse=0;
    printf("Enter a number\n");
    scanf("%d",&num);

    temp=num;
    while(temp)
    {
        digit=temp%10;//extract last digit
        reverse=reverse*10+digit;
        temp/=10;//remove last digit
    }
    if(num==reverse)
    {
        printf("Palindrome number\n");
    }
    else{
        printf("Not a palindrome number\n");
    }
    return 0;

}