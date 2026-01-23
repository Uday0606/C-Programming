#include<stdio.h>

void print_second_largest(int arr[],int n)
{
    int high,shigh;

    if(arr[0]>arr[1])
    {
        high=arr[0];
        shigh=arr[1];
    }
    else
    {
        high=arr[1];
        shigh=arr[0];
    }

    for(int i=2;i<n;i++)
    {
        if(arr[i]>high)
        {
            shigh=high;
            high=arr[i];
            
            
        }
        else if(arr[i]>shigh && arr[i]!=high)
        {
            shigh=arr[i];
        }
    }
    if(high==shigh)
    printf("second largest does not exist\n");
    else
    printf("second_largest_elemnet:%d\n",shigh);
}

int main()
{
    int arr[100],n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    print_second_largest(arr,n);
    return 0;
}