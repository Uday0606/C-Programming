/*Check whether a given number is even or odd*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);

    if(num%2==0)
        printf("It is even number:%d\n",num);
    else
        printf("It is odd number:%d\n",num);

    return 0;
}