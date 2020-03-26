#include "led.h"
#ifndef LEDINV_H
#define LEDINV_H

class LedInv : private Led{
	public:
		void On(unsigned char ucLedIndex);
};

#endif
