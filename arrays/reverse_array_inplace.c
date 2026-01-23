#include<stdio.h>

void reverse_array(int arr[],int n)
{
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    
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
    reverse_array(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}