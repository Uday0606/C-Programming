#include<stdio.h>
#include<stdint.h>

int main(void)
{
    uint8_t num=25;

    if(num & 1U)
    {
        printf("%u is Odd\n",num);
    }
    else
    {
        printf("%u is Even\n",num);
    }

    return 0;
}