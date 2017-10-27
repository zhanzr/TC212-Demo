#include "Port/Std/IfxPort.h"
#include "GpioApp.h"

void Gpio_init(void)
{
	IfxPort_setPinMode(&MODULE_P02, 0,  IfxPort_Mode_outputOpenDrainGeneral);
	IfxPort_setPinMode(&MODULE_P02, 1,  IfxPort_Mode_outputOpenDrainGeneral);
	IfxPort_setPinMode(&MODULE_P02, 2,  IfxPort_Mode_outputOpenDrainGeneral);
	IfxPort_setPinMode(&MODULE_P02, 3,  IfxPort_Mode_outputOpenDrainGeneral);
	IfxPort_setPinMode(&MODULE_P02, 4,  IfxPort_Mode_outputPushPullGeneral);
	IfxPort_setPinMode(&MODULE_P02, 5,  IfxPort_Mode_outputPushPullGeneral);
	IfxPort_setPinMode(&MODULE_P11, 10,  IfxPort_Mode_outputPushPullGeneral);
	IfxPort_setPinMode(&MODULE_P11, 11,  IfxPort_Mode_outputPushPullGeneral);

}

void Gpio_demo(void)
{
	IfxPort_togglePin(&MODULE_P02, 0);
	IfxPort_togglePin(&MODULE_P02, 1);
	IfxPort_togglePin(&MODULE_P02, 2);
	IfxPort_togglePin(&MODULE_P02, 3);
	IfxPort_togglePin(&MODULE_P02, 4);
	IfxPort_togglePin(&MODULE_P02, 5);
	IfxPort_togglePin(&MODULE_P11, 10);
	IfxPort_togglePin(&MODULE_P11, 11);
}
