/*Maximum and Minimum Digit in a Number*/
#include <stdio.h>

int main()
{
    int num,min=9,max=0;
    printf("Enter a number\n");
    scanf("%d",&num);

    // when number is 0
    if(num==0)
    {
        printf("Max:0 and Min:0\n");
        return 0;
    }

    while(num)
    {
        int digit=num%10;
        if(digit>max)
        {
            max=digit;
        }
        if(digit<min)
        {
            min=digit;
        }
        num/=10; //remove last digit
    }

    printf("Max:%d and Min:%d\n",max,min);
    return 0;
}