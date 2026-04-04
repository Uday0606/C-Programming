/*
Description:
Write a C program to count the number of vowels,
consonants, and spaces in a given string.

The program should ignore case sensitivity.

Example:
Input: Hello World
Output: Vowels: 3, Consonants: 7, Spaces: 1

*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>



void count_vcs(char str[]);
int main()
{
    char str[100];
    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0'; // Remove newline character added by fgets

    for(int i=0;str[i]!='\0';i++)
    {
        str[i]=tolower(str[i]);
    }

    count_vcs(str);
}

void count_vcs(char str[])
{
    int vowels_cnt=0,consonants_cnt=0,spaces_cnt=0;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]== 'a'||str[i]== 'e'||str[i]== 'i'||str[i]== 'o'||str[i]== 'u')
            vowels_cnt++;
        else if(str[i]==' ')
            spaces_cnt++;
        else if(str[i]>= 'a' && str[i]<= 'z')
            consonants_cnt++;
    }
    printf("vowels: %d,consonants: %d,spaces: %d\n",vowels_cnt,consonants_cnt,spaces_cnt);
}
