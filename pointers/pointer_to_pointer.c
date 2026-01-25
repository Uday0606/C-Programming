#include<stdio.h>
#include<stdlib.h>
void allocate(int **pp);
int main()
{
    int *p=NULL;
    allocate(&p);
    if(p!=NULL)
    {
        printf("%d\n",*p);
    }
    free(p);

}
 //function to allocate memory using pointer to pointer
void allocate(int **pp)
{
    *pp=malloc(sizeof(int));

    if(*pp==NULL)
    {
        printf("memory allocation failed\n");
        return;
    }
    **pp = 85;
}