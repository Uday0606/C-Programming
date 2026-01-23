#include<stdio.h>

void reverse_array(int arr[],int start,int end)
{
   for(int i=start,j=end;i<j;i++,j--)
   {
    //swap
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
}
void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void left_rotate(int arr[],int n, int k)
{
    k=k%n;
    
    reverse_array(arr,0,k-1);
    reverse_array(arr,k,n-1);
    reverse_array(arr,0,n-1);
}
void right_rotate(int arr[],int n,int k)
{
    k=k%n;
    reverse_array(arr,0,n-1);
    reverse_array(arr,0,k-1);
    reverse_array(arr,k,n-1);
}
int main()
{
    int arr[100],n,k,choice;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    
    printf("Enter the Elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    printf("Enter no.of times to rotate\n");
    scanf("%d",&k);
    printf("select the rotate(left-1,right-2)\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        left_rotate(arr,n,k);
        print_array(arr,n);
        break;

        case 2:
        right_rotate(arr,n,k);
        print_array(arr,n);
        break;

        default:
        printf("Invalid selection Try again!\n");
    }

    return 0;

}