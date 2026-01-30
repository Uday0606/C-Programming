#include<stdio.h>

void insertion_sort(int arr[],int n);
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

insertion_sort(arr,n);
print_arr(arr,n);
return 0;
}

void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++) // starts from second element.
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp) // shift larger elements to the right
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp; //insert element at correct place
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

Best case occurs when the array is already sorted,
so the inner while loop does not execute.

Space Complexity: O(1)

Sorting is done in-place using a constant amount
of extra space */
