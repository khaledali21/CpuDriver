#ifndef MCU_HW_H_
#define MCU_HW_H_
#include "Typedef.h"


#define CORTEXM4_PERI_BASE_ADDRESS              0xE000E000

#define APINT                                   (*((volatile uint32_t*)(CORTEXM4_PERI_BASE_ADDRESS + 0xD0C)))




#endif