#include<stdio.h>

int binary_search(int arr[],int key,int n);

int main()
{
    int arr[5]={10,20,30,40,50}; //binary search works on only sorted array
    int n=sizeof(arr)/sizeof(int);
    int key;

    printf("Enter value to find\n");
    scanf("%d",&key);

    int result=binary_search(arr,key,n);

    if(result!=-1)
    {
        printf("value %d found at index:%d\n",key,result);
    }
    else
    {
        printf("value:%d not found\n",key);
    }
    return 0;
}

int binary_search(int arr[],int key,int n)
{
    int low=0,high=n-1;

    while(low<=high)
    {
    int mid=low+((high-low)/2);

    if(arr[mid]==key)
        return mid;  //found
    else if(key>arr[mid])
        low=mid+1;  //search right half
    else
        high=mid-1;  // search left half
    }

    return -1; // not found

}




/* Binary Search (Iterative)
- Array must be sorted

Time Complexity:
Best Case    : O(1)
Average Case : O(log n)
Worst Case   : O(log n)

Space Complexity:O(1) */