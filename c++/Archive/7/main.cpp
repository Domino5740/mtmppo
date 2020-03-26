#include "led.h"
#include "stepper.h"
#include <stdio.h>

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}
	


int main(void)
{
	Stepper My_Stepper(3);
	while(1){
		Delay(500);
		My_Stepper.StepLeft();
	}
}
