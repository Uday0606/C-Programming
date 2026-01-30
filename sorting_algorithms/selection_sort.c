#include<stdio.h>

void selection_sort(int arr[],int n);
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

selection_sort(arr,n);
print_arr(arr,n);
return 0;
}

void selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;

        for(int j=i+1;j<n;j++) // linear search
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min !=i)
        {
            //swap
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
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


/* Time Complexity:
 Best Case    : O(n^2)
 Average Case : O(n^2)
 Worst Case   : O(n^2)

 For each element, we scan the remaining array to find the minimum.

Space Complexity:O(1)
Sorting is done in-place using only a constant extra variable */
