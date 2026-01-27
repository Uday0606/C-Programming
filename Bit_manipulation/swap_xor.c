#include<stdio.h>
#include<stdint.h>

int main(void)
{
    uint8_t a=5;
    uint8_t b=9;

    printf("Before swap: a=%u ,b=%u\n",a,b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swap: a=%u,b=%u\n",a,b);
    return 0;

}