#ifndef __CPUDRIVER_H_
#define __CPUDRIVER_H_


static void inline CpuDriver_EnableInterrupts(void){
  __asm("cpsie 	i");
}

static void inline CpuDriver_DisableInterrups(void){
  __asm("cpsid 	i");
}
void CpuDriver_EnterCriticalSection(void);
void CpuDriver_ExitCriticalSection(void);
#endif