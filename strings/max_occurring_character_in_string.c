/*
Description:
Write a C program to find the character that occurs the 
maximum number of times in a given string.

Example:
Input:  programming
Output: Maximum occurring character: g -> 2 times
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[256]={0};
    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    for(int i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
    }

    // Find max occurring character
    int max=0;
    char ch;
    for(int i=0;str[i]!='\0';i++)
    {
        if(freq[str[i]]>max)
        {
            max=freq[str[i]];
            ch=str[i];
        }
    }
    printf("max occuring character:%c ->%d times\n",ch, max);
    return 0;
}