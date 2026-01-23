#include<stdio.h>
void merge(int a1[],int n,int a2[],int m,int result[])
{
    int i=0,j=0,k=0;

    while(i<n && j<m)
    {
        if(a1[i]<a2[j])
        {
            result[k]=a1[i];//storing small element
            i++;
            k++;
        }
        else
        {
            result[k]=a2[j];
            j++;
            k++;
        }
    }

    while(i<n)
    {
        result[k]=a1[i];
        i++;
        k++;
    }
    while (j<m)
    {
        result[k]=a2[j];
        j++;
        k++;
    }
    
}
int main()
{
    int a1[]={1,3,5,7,9};
    int a2[]={2,4,5,6,8};
    int result[10];

    merge(a1,5,a2,5,result);
    for(int i=0;i<10;i++)
    {
        printf("%d ",result[i]);
    }
    return 0;

}