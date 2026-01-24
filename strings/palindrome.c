#include<stdio.h>

int check_palindrome(char str[]);
int main()
{
    char str[50];
    int i=0;
    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);

    //remove '\n'
    while(str[i]!='\0')
    {
        if(str[i]=='\n')
        {
            str[i]='\0';
            break;
        }
        i++;
    }

    if(check_palindrome(str))
    {
        printf("It is palindrome string:%s\n",str);
    }
    else
    {
        printf("It is not a palindrome string:%s\n",str);
    }
    return 0;
    
}

int check_palindrome(char str[])
{
    int i=0,j=0;

    while(str[j]!='\0')
        j++;

    j--;

    while(i<j)
    {
        if(str[i]!=str[j])
        return 0;

        i++;
        j--;
    }
    return 1;
    
}