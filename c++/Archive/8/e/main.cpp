#include "led.h"
#include "stepper.h"
#include "keyboard.h"
#include <LPC213X.H>

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}
	
int main(void)
{
	Led My_Led;
	LedInv My_LedInv;
	Keyboard My_Keyboard;
	Stepper My_Stepper;
	Led *LedPointer;
	
	if(My_Keyboard.eRead() == Keyboard::BUTTON_4) {
		LedPointer = &My_LedInv;
	}
	else {
		LedPointer = &My_Led;
	}
	My_Stepper.SetLed(LedPointer);
	while(1) {
		Delay(500);
		switch (My_Keyboard.eRead()) {
		case Keyboard::BUTTON_1:
			My_Stepper.StepLeft();
		break;
		case Keyboard::BUTTON_2:
			My_Stepper.StepRight();
		break;
		default:
		break;
		}
	}
}
