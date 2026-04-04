/*
Description:
Write a C program to reverse a given string

The reversal should be done in-place.

Example:
Input:  hello
Output: olleh
*/
#include <stdio.h>
#include <string.h>
void reverse_string(char str[]);
int main()
{
    char str[100];
    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    reverse_string(str);
    printf("%s\n",str);
    return 0;
}

void reverse_string(char str[])
{
    int i=0,j=strlen(str)-1;

    while(i<j)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        
        i++;
        j--;

    }
}