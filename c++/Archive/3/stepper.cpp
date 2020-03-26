#include "stepper.h"
#include "led.h"

Stepper::Stepper() {
	ucLedCtr = 0;
}

void Stepper::Step(enum Stepper::Step eStep) {
	if(eStep == LEFT){
		ucLedCtr--;
		ucLedCtr = ucLedCtr % 4;
		My_Led.On(ucLedCtr);
	}
	else if(eStep == RIGHT){
		ucLedCtr++;
		ucLedCtr = ucLedCtr % 4;
		My_Led.On(ucLedCtr);
	}
	else{}
}

void Stepper::StepLeft(void) {
	Step(LEFT);
}

void Stepper::StepRight(void) {
	Step(RIGHT);
}
