#include "led.h"
#include "stepper.h"
#include <stdio.h>

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

Led My_Led;
Stepper My_Stepper;

int main(void)
{
	My_Led.Init();

	while(1){
		Delay(100);
		My_Stepper.StepLeft();
	}
}