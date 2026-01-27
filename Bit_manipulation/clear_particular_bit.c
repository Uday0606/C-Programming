#include<stdio.h>
#include<stdint.h>
#include "bit_macros.h"

#define BIT_POS 3

int main()
{
    uint8_t REG=0x0F; //0000 1111 (bits 0,1,2,3 are set)
    CLEAR_BIT(REG,BIT_POS); //clear 3 bit
    printf("REG=0x%02X\n",REG);
    return 0;
}
