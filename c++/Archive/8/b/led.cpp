#include <LPC21xx.H>
#include "led.h"

#define LED0_bm (1<<16)
#define LED1_bm (1<<17)
#define LED2_bm (1<<18)
#define LED3_bm (1<<19)
#define BUTTON4_bm (1<<7)

unsigned char ucInversion = !(IO0PIN & BUTTON4_bm);

Led::Led(void) {
	IO1DIR = IO1DIR | LED0_bm | LED1_bm | LED2_bm | LED3_bm;
	IO1SET = LED0_bm;
}

void Led::On(unsigned char ucLedIndex)
{
	IO1CLR = (LED0_bm | LED1_bm | LED2_bm | LED3_bm);
	
	switch(ucLedIndex) {
		case 0:
			IO1SET = LED0_bm;
		break;
		case 1:
			IO1SET = LED1_bm; 
		break;
		case 2:
			IO1SET = LED2_bm; 
		break;
		case 3:
			if(ucInversion == 0) {
				IO1SET = LED3_bm; 
			}
			else {
				IO1CLR = LED3_bm;
			};
		break;
		default:
		break;		
	}
}
