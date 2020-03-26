#include "stepper.h"
#include "led.h"

void Stepper::SetLed(Led *pLed) {
	pMyLed = pLed;
}
void Stepper::Step(enum Stepper::Step eStep) {
	if(eStep == LEFT){
		ucLedCtr--;
		ucLedCtr = ucLedCtr % 4;
	}
	else if(eStep == RIGHT){
		ucLedCtr++;
		ucLedCtr = ucLedCtr % 4;
	}
	else{}
	pMyLed -> On(ucLedCtr);
}

void Stepper::StepLeft(void) {
	Step(LEFT);
}

void Stepper::StepRight(void) {
	Step(RIGHT);
}
