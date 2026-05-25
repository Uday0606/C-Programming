# include<stdio.h>
# include<string.h>
void my_atoi(char str[])
{
    int num=0;
    for(int i=0;str[i]!='\0';i++ )
    {
        int digit=str[i]-'0';
        num=num*10+digit;
    }
    printf("%d\n",num);
}
int main()
{
    char str[100];
    printf("Enter a number\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    my_atoi(str);
    return 0;
}