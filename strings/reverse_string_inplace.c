#include<stdio.h>
#include<string.h>

void reverse_string(char str[]);
int main()
{
    char str[50];
    int i=0;
    printf ("Enter the string\n");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
        if(str[i]=='\n')
        {
            str[i]='\0';
            break;
        }
        i++;
    }

    reverse_string(str);
    printf("Reversed string:%s\n",str);
    return 0;

}

void reverse_string(char str[])
{
    int i=0,j=0;

     while(str[j]!='\0')//to find length 
     j++;

     if(j==0)
     return;//empty string
    
    
    j--;//pointing to last valid character

    
    while(i<j)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;

        i++; 
        j--;
    }

}