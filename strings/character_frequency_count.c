/*
Description:
Write a C program to count and display the frequency of 
each character in a given string.

Each character should be printed only once along with 
its frequency.
Example:
Input:  programming
Output:
p -> 1
r -> 2
o -> 1
g -> 2
a -> 1
m -> 2
i -> 1
n -> 1*/

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

    for(int i=0;str[i]!='\0';i++)
    {
        if(freq[str[i]]!=0)
        {
            printf("%c -> %d\n",str[i],freq[str[i]]);
            freq[str[i]]=-1;
         
        }
    }
  
    return 0;
}