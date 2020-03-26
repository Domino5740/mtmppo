#ifndef LED_H
#define LED_H
class Led {
	public:
		void Init(void);
		void StepLeft(void);
		void StepRight(void);
	private:
		unsigned char ucLedCtr;
		enum Step{LEFT,RIGHT};
		void Step(enum Step eStep);
		void On(unsigned char ucLedIndex);
		//enum LedState {STEP_LEFT, STEP_RIGHT, LED_STOP};
};
#endif //LED_H
