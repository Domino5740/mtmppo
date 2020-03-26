#include <LPC213X.H>
#include "stepper.h"
#include "led.h"

void Stepper::SetMode(unsigned char ucInvert) {
	Stepper::ucInversion = ucInvert;
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
	if(ucInversion == 1) {
		MyLedInv.On(ucLedCtr);
	}
	else {
		MyLed.On(ucLedCtr);
	}
}

void Stepper::StepLeft(void) {
	Step(LEFT);
}

void Stepper::StepRight(void) {
	Step(RIGHT);
}
