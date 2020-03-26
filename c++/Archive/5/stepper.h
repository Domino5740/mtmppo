#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"
class Stepper : private Led {
	public:
		void StepLeft(void);
		void StepRight(void);
		Stepper(void);
	private:
		unsigned char ucLedCtr;
		enum Step{LEFT,RIGHT};
		void Step(enum Step eStep);
		//enum LedState {STEP_LEFT, STEP_RIGHT, LED_STOP};
};
#endif
