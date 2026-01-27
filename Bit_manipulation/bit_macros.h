#ifndef BIT_MACROS_H
#define BIT_MACROS_H

#include<stdint.h>//for uint8_t,uint16_t,uint32_t

/* Bit manipulation macros -single bit*/
#define SET_BIT(REG,BIT)    ((REG) |= (1U<<(BIT)))
#define CLEAR_BIT(REG,BIT)  ((REG) &= ~(1U<<(BIT))) 
#define TOGGLE_BIT(REG,BIT) ((REG) ^=  (1U<<(BIT)))
#define CHECK_BIT(REG,BIT)  ((REG) &   (1U<<(BIT)))

/*Multiple bit operations */

#define SET_BITS(REG,MASK)   ((REG) |= (MASK))
#define CLEAR_BITS(REG,MASK) ((REG) &=~(MASK))

#endif
