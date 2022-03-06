#include "../../Common/Typedef.h"
#include "CpuDriver.h"
static uint32_t volatile CriticalSectionEntry = 0;

void CpuDriver_EnterCriticalSection(void){
    CpuDriver_DisableInterrups();
    CriticalSectionEntry++;
}
void CpuDriver_ExitCriticalSection(void){
  if(CriticalSectionEntry > 1){
    CriticalSectionEntry--;
  }
  else{
    CriticalSectionEntry = 0;
    CpuDriver_EnableInterrupts();
  }
}
