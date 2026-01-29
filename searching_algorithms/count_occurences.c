#include<stdio.h>
int first_occurence(int arr[],int key,int n);
int last_occurence(int arr[],int key,int n);
int main()
{
    int arr[6]={2,5,10,10,10,20};
    int n=sizeof(arr)/sizeof(int);
    int key;

    printf("Enter value to count\n");
    scanf("%d",&key);

    int first_pos=first_occurence(arr,key,n);
    if(first_pos==-1)
    {
        printf("count of given value %d is 0\n",key);
    }
    else
    {
        int last_pos=last_occurence(arr,key,n);
        printf("count of given value %d is %d\n",key,(last_pos-first_pos)+1);
    }
    return 0;
}
int first_occurence(int arr[],int key,int n)
{
    int result=-1; //default value
    int low=0,high=n-1;

    while(low<=high)
    {
    int mid=low+(high-low)/2;

    if(arr[mid]==key)
    {
        result=mid; //overwrite -1
        high=mid-1;
    }
    else if(key>arr[mid])
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    }
    }
    return result;  
}

int last_occurence(int arr[],int key,int n)
{
    int result=-1;
    int low=0,high=n-1;

    while(low<=high)
    {
    int mid=low+(high-low)/2;
    
    if(arr[mid]==key)
    {
        result=mid;
        low=mid+1;
    }
    else if(key>arr[mid])
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    }
    }
    return result;
}

/* Count Occurrences of an Element in a Sorted Array

Time Complexity  :O(log n)

Space Complexity :O(1)  */