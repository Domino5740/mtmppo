#include "stepper.h"
#include "led.h"

Stepper::Stepper(unsigned char ucLedIndex) {
	ucLedCtr = ucLedIndex;
	On(ucLedIndex);
}

void Stepper::Step(enum Stepper::Step eStep) {
	if(eStep == LEFT){
		ucLedCtr--;
		ucLedCtr = ucLedCtr % 4;
		On(ucLedCtr);
	}
	else if(eStep == RIGHT){
		ucLedCtr++;
		ucLedCtr = ucLedCtr % 4;
		On(ucLedCtr);
	}
	else{}
}

void Stepper::StepLeft(void) {
	Step(LEFT);
}

void Stepper::StepRight(void) {
	Step(RIGHT);
}
