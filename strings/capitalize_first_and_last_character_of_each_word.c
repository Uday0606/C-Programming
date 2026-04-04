/*
Description:
Write a C program to capitalize the first and last character 
of each word in a given string.

Words are separated by spaces.

Example:
Input:  hello world
Output: HellO WorlD

*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>


void capitalize_edges(char str[]);
int main()
{
    char str[100];
    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    capitalize_edges(str);
    printf("%s",str);
    return 0;

}
void capitalize_edges(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        while(str[i]==' ') //skip spaces
            i++;
        
        int start=i; //start of word

        while(str[i]!=' ' && str[i]!='\0') // move till end of word
            i++;
        
        int end=i-1; //end of word

        if(start<=end)
            str[start]=toupper(str[start]);
        
        if(end>=start)
            str[end]=toupper(str[end]);

    }

}