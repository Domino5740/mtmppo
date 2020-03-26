#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"
#include "ledinv.h"
class Stepper {
	public:
		void StepLeft(void);
		void StepRight(void);
		void SetMode(unsigned char ucInvert);
	private:
		unsigned char ucLedCtr;
		unsigned char ucInversion;
		enum Step{LEFT,RIGHT};
		void Step(enum Step eStep);
		Led MyLed;
		LedInv MyLedInv;
		//enum LedState {STEP_LEFT, STEP_RIGHT, LED_STOP};
};
#endif
