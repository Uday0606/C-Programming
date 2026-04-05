/*
Description:
Write a C program to find and print all non-repeating 
characters in a given string.


Example:
Input:  programming
Output: p o a i n
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[256]={0},found=0;
    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    for(int i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
    }

    for(int i=0;str[i]!='\0';i++)
    {
        if(freq[str[i]]==1)
        {
            printf("%c ",str[i]);
            freq[str[i]]=0;
            found=1;
        }
    }
      if(!found)
        printf("No non repeating characters\n");
    return 0;
}