#include<stdio.h>
#include<stdint.h>
#include "bit_macros.h"

#define BIT_POS 3
int main()
{
    uint8_t REG=0x00;// simulated 8bit register
    SET_BIT(REG,BIT_POS);//set bit at pos 3
    printf("REG=0x%02X\n",REG);
    return 0;
}
