#include<stdio.h>
#include<string.h>
void char_frequency(char str[]);
int main()
{
    char str[100];
    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    char_frequency(str);
    return 0;
}
void char_frequency(char str[])
{
    int freq[256]={0};//freq array
    int i=0;

    //count freq
    while(str[i]!='\0')
    {
        freq[str[i]]++;
        i++;
    }

    for(int i=0;i<256;i++)
    {
        if(freq[i]>0)
        {
            printf("%c: %d\n",i,freq[i]);
        }
    }

}