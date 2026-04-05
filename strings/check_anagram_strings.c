/*
Description:
Write a C program to check whether two given strings are
anagrams of each other.

Two strings are anagrams if they contain the same characters
in the same frequency but in a different order.

Example:
Input:  listen, silent
Output: Anagrams

*/
#include <stdio.h>
#include <string.h>

int check_anagram(char s1[],char s2[]);

int main()
{
    char s1[100],s2[100];
    printf("Enter the string 1\n");
    fgets(s1,sizeof(s1),stdin);
    s1[strcspn(s1,"\n")]='\0';

    printf("Enter the string 2\n");
    fgets(s2,sizeof(s2),stdin);
    s2[strcspn(s2,"\n")]='\0';

    if(check_anagram(s1,s2))
        printf("Anagrams\n");
    else
        printf("Not Anagrams\n");
    
    return 0;
}
int check_anagram(char s1[],char s2[])
{
    int freq[256]={0};

    // if lengths differ not anagram
    if(strlen(s1)!=strlen(s2))
        return 0;

    //Count frequency of characters in s1
    for(int i=0;s1[i]!='\0';i++)
    {
        freq[s1[i]]++;
    }
    // decrease frequency using s2
    for(int i=0;s2[i]!='\0';i++)
    {
        freq[s2[i]]--;
    }
     // check if all frequencies are zero
    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0)
            return 0;
    }
    return 1;
}