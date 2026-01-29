#include<stdio.h>

int linear_search(int arr[],int key ,int n);

int main()
{
    int arr[100],n,key;
    printf("Enter the numbere of elements\n");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(int i=0;i<n;i++) //user input
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the value to find\n");
    scanf("%d",&key);
    int result=linear_search(arr,key,n);

    if(result!=-1)
    {
        printf("value:%d found at index:%d\n",key,result);
    }
    else
    {
        printf("value:%d not found\n",key);
    }
    return 0;


}

int linear_search(int arr[],int key ,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        return i;  //value found
    }
    return -1; //value not found
}


/*Linear Search:
Best Case    : O(1)  (found at first index)
Average Case : O(n)
Worst Case   : O(n)  (found at last index or not found)

Space Complexity:
O(1)  (no extra memory used)
*/