#include<stdio.h>
#include<stdint.h>
#include "bit_macros.h"

#define BIT_POS 3

int main(void)
{
    uint8_t REG=0x00; //0000 0000
    TOGGLE_BIT(REG,BIT_POS);
    printf("REG= 0x%02X\n",REG);

    /*Toggle again*/
    TOGGLE_BIT(REG,BIT_POS);
    printf("REG= 0x%02X\n",REG);//0x00

    return 0;
}