#include <stdio.h>
#include <string.h>

void keep_chars(char str[]);
int main()
{
    char str[100];
    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    keep_chars(str);
    printf("%s",str);
    return 0;
}

void keep_chars(char str[])
{
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        str[j++]=str[i];
    }
    str[j]='\0';
}