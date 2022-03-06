#include "MCAL/CpuDriver/CpuDriver.h"
#include "Common/BIT_Math.h"
#include "Common/Typedef.h"
uint32_t volatile x = 1;
uint32_t volatile y = 0x01FFFFFF;
void RAM_Access(void){
  CpuDriver_EnterCriticalSection();
  RAM_BB(y, 24) = 0;
  CpuDriver_ExitCriticalSection();
}
void main(void)
{
  CpuDriver_EnterCriticalSection();
  RAM_BB(x, 0) = 0;
  RAM_Access();
  CpuDriver_ExitCriticalSection();
  while(1){
  }
}
