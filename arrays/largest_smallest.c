#include<stdio.h>
void print_largest_smallest(int arr[],int n)
{
    int high=arr[0],small=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>high)
        {
            high=arr[i];
        }
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    printf("Highest element:%d Smallest element:%d\n",high,small);
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
    print_largest_smallest(arr,n);
    return 0;
}