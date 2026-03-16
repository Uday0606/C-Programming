/*Problem: Check Prime Number

A prime number is a number greater than 1 that has only two factors:
1 and itself.
Examples:
2, 3, 5, 7, 11 */
#include<stdio.h>
int check_prime(int num);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    if(check_prime(num))
        printf("It is a prime number:%d\n",num);
    else
        printf("It is not a prime number:%d\n",num);

    return 0;
}

int check_prime(int num)
{
    if(num<=1)
    return 0;

    // Check divisibility from 2 to sqrt(num)
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}