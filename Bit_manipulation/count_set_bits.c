#include<stdio.h>
#include<stdint.h>


int main(void)
{
    uint8_t num=0x0D; // 0000 1101 (3 bits set)
    uint8_t count=0;

    while(num!=0)
    {
        if(num&1U) //check lsb
        {
            count++;
        }
        num>>=1;  // move next bit to LSB
    }

printf("Number of set bits =%u\n",count);
return 0;
}