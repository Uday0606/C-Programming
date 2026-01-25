#include<stdio.h>
int main()
{
    int arr[5]={10,20,40,50,60};
    int *p=arr;

    // traversing array using pointer (method 1)
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");


    // traversing array using pointer (method 2)
    int b[4]={47,58,78,97};
    int *x=b;

    for(int i=0;i<4;i++)
    {
        printf("%d ",*x);
        x++;
    }
    return 0;
}