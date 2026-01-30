#include<stdio.h>

void bubble_sort(int arr[],int n);
void print_arr(int arr[],int n);

int main()
{
int arr[100], n;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}

bubble_sort(arr,n);
print_arr(arr,n);
return 0;
}

void bubble_sort(int arr[],int n)
{   
    
    for(int i=0;i<n-1;i++)
    {
        int flag=0; 
        /*flag is used to check whether any swap happens in this pass
        If no swap occurs, array is already sorted*/
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
}

void print_arr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}


/*
Time Complexity:
Best Case    : O(n)
Average Case : O(n^2)
Worst Case   : O(n^2)

Best case occurs when the array is already sorted.
The flag remains 0, so the algorithm stops early.

Space Complexity:O(1)

Sorting is done in-place using a constant amount
of extra space.  */
