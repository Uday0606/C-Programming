#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);

    //using temp
    temp=a;
    a=b;
    b=temp;
    printf("After swapping a=%d b=%d\n",a,b);

    //without temp
    int x,y;
    printf("Enter two number\n");
    scanf("%d %d",&x,&y);

    x=x^y;
    y=x^y;
    x=x^y;
    printf("After swapping x=%d y=%d\n",x,y);
    return 0;
     
}