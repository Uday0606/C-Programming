#include<stdio.h>
int remove_duplicates(int arr[],int n)
{
    int i=0;

    for(int j=1;j<n;j++)
    {
        if(arr[j]!=arr[i])
        {
            i++;//move to next position
            arr[i]=arr[j];// store new unique element
            
        }
    }
    return i+1;
}
int main()
{
    int arr[100],n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    
    printf("Enter sorted array Elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int new_size=remove_duplicates(arr,n);

    for(int i=0;i<new_size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}