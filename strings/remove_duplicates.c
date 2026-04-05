/*
Description:
Write a C program to remove duplicate characters from a 
given string.

should keep only the first occurrence of each 
character and remove all subsequent duplicates.

Example:
Input:  programming
Output: progamin

*/
#include <stdio.h>
#include <string.h>


void remove_duplicates(char str[]);

int main()
{
    char str[100];
    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    remove_duplicates(str);
    printf("%s",str);

}

void remove_duplicates(char str[])
{
    int freq[256]={0};
    int j=0;
    
    for(int i=0;str[i]!='\0';i++)
    {
        if(freq[str[i]]==0)
        {
            str[j++]=str[i];
            freq[str[i]]=1;
        }
    }
    str[j]='\0';
}