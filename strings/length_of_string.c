#include<stdio.h>

int main()
{
    char str[30];
    int i=0;
    printf("Enter your first name\n");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        i++;
    }
    printf("Name length:%d\n",i);
}