#include<stdio.h>
int binary_search(int arr[],int low,int high,int key);
int main()
{
   
    int arr[5]={10,20,30,40,50}; //binary search works on only sorted array
    int n=sizeof(arr)/sizeof(int);
    int key;

    printf("Enter value to find\n");
    scanf("%d",&key);

    int result=binary_search(arr,0,n-1,key);

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

int binary_search(int arr[],int low,int high,int key)
{
    //base case not found
    if(low>high)
    return -1;

    int mid=low+(high-low)/2;

    if(arr[mid]==key)
        return mid;
    else if(key>arr[mid])
        return binary_search(arr,mid+1,high,key);
    else
        return binary_search(arr,low,mid-1,key);
}


/*Binary Search (Recursive)
- Array must be sorted

Time Complexity:
Best Case    : O(1)
Average Case : O(log n)
Worst Case   : O(log n)

Space Complexity:
O(log n)  // recursion stack  */
