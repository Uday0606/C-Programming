/*
Description:
Write a C program to remove all spaces from a given string.

Example:
Input:  hello world
Output: helloworld
*/
#include <stdio.h>
#include <string.h>

void remove_spaces(char str[]);
int main()
{
    char str[100];
    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    remove_spaces(str);
    printf("After removing spaces:%s\n",str);
    return 0;
}
void remove_spaces(char str[])
{
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[j++]=str[i];
        }
    }
    str[j]='\0';
}