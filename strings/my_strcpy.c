#include<stdio.h>
void my_strcpy(const char src[],char dest[]);
int main()
{
    char src[20]="hello";
    char dest[30];

    my_strcpy(src,dest);
    printf("%s\n",dest);
    return 0;
}
void my_strcpy(const char src[], char dest[])
{
    int i=0;
    while(src[i]!='\0')
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
}