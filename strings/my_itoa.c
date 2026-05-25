#include<stdio.h>
#include<string.h>
void reverse(char str[])
{
    int i=0,j=strlen(str)-1;
    for(i,j;i<j;i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}
void my_itoa(int num,char str[])
{
    int i=0;
    while(num!=0)
    {
        int digit=num%10;
        str[i++]=digit+'0';
        num/=10;
    }
    str[i]='\0';//end string

    //reverse string
    reverse(str);

}
int main()
{
    int num;
    char str[50];
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num<0)
    {
        num=-num;
    }
    my_itoa(num,str);
    printf("%s\n",str);
    return 0;
}