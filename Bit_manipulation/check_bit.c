// check if a bit is set or not

#include<stdio.h>
#include<stdint.h>
#include "bit_macros.h"

#define BIT_POS 3

int main(void)
{
    uint8_t REG=0X08; // 0000 1000 (bit 3 is set)

    if(CHECK_BIT(REG,BIT_POS))
    {
        printf("Bit %d is SET\n",BIT_POS);
    }
    else
    {
        printf("Bit %d is CLEAR\n",BIT_POS);
    }
    return 0;
}