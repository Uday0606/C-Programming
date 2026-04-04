-/*
Description:
Write a C program to remove all vowels from a given string.

The program should handle both uppercase and lowercase vowels
and modify the string in-place.

Example:
Input:  Hello World
Output: Hll Wrld

*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>


void remove_vowels(char str[]);
int main()
{
    char str[100];
    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    remove_vowels(str);
    printf("After removing vowels: %s",str);
    return 0;
}

void remove_vowels(char str[])
{
    char ch;
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        ch=tolower(str[i]);
        if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))// keep only non-vowel characters
        {
            str[j++]=str[i];
        } 
    }
    str[j]='\0';
}