//count vowels,consonants,digits
#include<stdio.h>
void count_vcd(char str[]);
int main()
{
    char str[80];
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

    count_vcd(str);
    return 0;
}
void count_vcd(char str[])
{
    int v=0,c=0,d=0;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0' && str[i]<='9')//digits
        {
            d++;
        }
        else if( (str[i]>='a' && str[i]<='z' )|| (str[i]>='A' && str[i]<='Z') )//characters both cases
        {
            if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' || str[i]=='o' || str[i]=='u' ||
               str[i]=='A' ||str[i]=='E' ||str[i]=='I' || str[i]=='O' || str[i]=='U')
               {
                v++;
               }
               else
               {
                 c++;
               }
        }

    }
    printf("vowels=%d,consonants=%d,digits=%d\n",v,c,d);
}