#include<stdio.h>
void reverse_array(int *arr,int n);
void print_array(int *arr,int n);
int main()
{
    int arr[100],n;
    printf("Enter the number of elemnts\n");
    scanf("%d",&n);
    
    if(n<1 ||n>100)
    {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    reverse_array(arr,n);
    print_array(arr,n);
    return 0;

}
void reverse_array(int *arr,int n)
{
    int *start=arr;
    int *end=arr+n-1;

    while(start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
}
void print_array(int *arr,int n)
{
    int *p=arr;
    for(int i=0;i<n;i++)
    {
        printf("%d ",*p);
        p++;
    }
    printf("\n");
}