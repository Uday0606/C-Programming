/*Greatest of two numbers

1) Using if-else statements
2) Using ternary operator (?)*/

#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    if(num1==num2)
        printf("Both are eqaul\n");
    else if(num1>num2)
        printf("%d is greater than %d\n",num1,num2);
    else
        printf("%d is greater than %d\n",num2,num1);

    return 0;
}


/*Method 2: Using Ternary Operator*/
/*int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    int max=(num1>num2)?num1:num2;
    printf("Greatest of two numbers is:%d\n",max);
    return 0;
}*/
