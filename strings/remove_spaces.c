#include<stdio.h>
void remove_spaces(char str[]);
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
    printf("original string:%s\n",str);
    remove_spaces(str);
    printf("After removing spaces:%s\n",str);
    return 0;
}

void remove_spaces(char str[])
{
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            str[j++]=str[i];
        }
        i++;
    }
    str[j]='\0';
}