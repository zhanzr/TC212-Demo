#include "Cpu\Std\Ifx_Types.h"
#include "Cpu\Std\IfxCpu_Intrinsics.h"
#include "Scu\Std\IfxScuWdt.h"
#include "Cpu\Std\IfxCpu.h"

#include "Cpu0_Main.h"

int core0_main (void)
{

	IfxCpu_enableInterrupts();

    IfxScuWdt_disableCpuWatchdog (IfxScuWdt_getCpuWatchdogPassword ());
    IfxScuWdt_disableSafetyWatchdog (IfxScuWdt_getSafetyWatchdogPassword ());

	initTime();
	Gpio_init();
    while (1)
     {
    	wait(TimeConst_1s * 2);
    	Gpio_demo();
      }
     return (1);
}

