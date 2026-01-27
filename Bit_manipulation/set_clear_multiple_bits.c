#include<stdio.h>
#include<stdint.h>
#include "bit_macros.h"

/*Mask: bits 0,2,3*/
#define MASK 0x0D // 0000 1101

int main(void)
{
    uint8_t REG=0x00;

    SET_BITS(REG,MASK);
    printf("After SET: REG=0x%02X\n",REG);

    CLEAR_BITS(REG,MASK);
    printf("After CLEAR: REG=0x%02X\n",REG);

    return 0;
}