#include <LPC21xx.H>
#include "keyboard.h"

#define BUTTON1_bm (1<<4)
#define BUTTON2_bm (1<<5)
#define BUTTON3_bm (1<<6)
#define BUTTON4_bm (1<<7)

Keyboard::Keyboard(void){
	IO0DIR = IO0DIR & BUTTON1_bm & BUTTON2_bm & BUTTON3_bm & BUTTON4_bm;
}

Keyboard::eState Keyboard::eRead(void){
	if(!(IO0PIN & BUTTON1_bm)){
		return Keyboard::BUTTON_1;
	}
	else if(!(IO0PIN & BUTTON2_bm)){
		return Keyboard::BUTTON_2;
	}
	else if(!(IO0PIN & BUTTON3_bm)){
		return Keyboard::BUTTON_3;
	}
	else if(!(IO0PIN & BUTTON4_bm)){
		return Keyboard::BUTTON_4;
	}
	else {
		return Keyboard::RELEASED;
	}
}
