#include "EcuM.h"
#include "Os.h"

int main(void)
{
  Os_InitMemory();
  Os_Init();
  EcuM_Init();    
  return 0;
}

TASK(Init_Task)
{
  EcuM_StartupTwo();    

  (void)TerminateTask();
}

boolean Appl_DetEntryCallout(uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  return FALSE;
}