#ifndef KEYBOARD_H
#define KEYBOARD_H
class Keyboard {
	public:
		Keyboard(void);
		enum eState {
		RELEASED,
		BUTTON_1,
		BUTTON_2,
		BUTTON_3,
		BUTTON_4
		};
		enum eState eRead(void);
};
#endif
