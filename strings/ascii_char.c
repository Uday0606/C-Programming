/*
Description:
Write a C program to find the ASCII value of a given character.
The program should take a character as input and print its ASCII value.

Example:
Input: A
Output: ASCII value of A is: 65
*/
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("ASCII value of %c is:%d",ch,ch);
    return 0;
}
