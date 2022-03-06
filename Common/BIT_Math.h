#ifndef BIT_MATH_H_
#define BIT_MATH_H_
#include "Typedef.h"
#define SET_BIT(REG,BIT) 	 (REG |= (1<<BIT))
#define CLR_BIT(REG,BIT) 	 (REG &=~ (1<<BIT))
#define Toggle_BIT(REG,BIT)  (REG ^= (1<<BIT))
#define GET_BIT(REG,BIT) 	 ((REG >> BIT) & (0X01))
#define abs(x,y)			 (x > y? x - y : y - x)
#define ASSIGN_HIGH_NIB(reg,value)	((reg)=((value<<4)|(reg&0X0F)))

#define RAM_BASE_BAND 0x20000000
#define RAM_BASE_ALIAS 0x22000000

#define offset(address) ((uint8_t*) address - (uint8_t*) RAM_BASE_BAND)
#define RAM_BB(REG, BIT)	(*((uint32_t*)(RAM_BASE_ALIAS + (4*(((offset(&REG)) * 8) + BIT)))))
#endif /* BIT_MATH_H_ */
