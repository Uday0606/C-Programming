#include<stdio.h>
#include<string.h>
int my_strcmp(const char s1[],const char s2[]);
int main()
{
    char s1[50],s2[50];
    printf("Enter the s1\n");
    fgets(s1,sizeof(s1),stdin);
    s1[strcspn(s1,"\n")]='\0';
    printf("Enter the s2\n");
    fgets(s2,sizeof(s2),stdin);
    s2[strcspn(s2,"\n")]='\0';

    int result=my_strcmp(s1,s2);

    if(result==0)
    {
        printf("Both s1 and s2 strings are equal\n");
    }
    else if(result<0)
    {
        printf("s2 is greater\n");
    }
    else
    {
        printf("s1 is greater\n");
    }
    return 0;

}
int my_strcmp(const char s1[],const char s2[])
{
    int i=0;
    while(s1[i]!='\0' && s2[i]!='\0')
    {
        if(s1[i]!=s2[i])
        return s1[i]-s2[i];

        i++;
    }
    return s1[i]-s2[i];
}