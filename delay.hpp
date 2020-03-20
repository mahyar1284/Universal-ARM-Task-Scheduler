#include "stm32f10x.h"
#include <stdint.h>
#ifndef DELAY_H
#define DELAY_H

class Delay
{
	public:
		Delay();
		static void InterruptCallBack();
		static void delayConfig();
		static void delay_us(int us);
		static void delay(int ms);
		void done();
		static void increaseTimer();
		static void increaseDelayTimer();
		bool timerRiched(int64_t time);
		static void clearDelayTimer();
		static bool isDelayWaiting();
		static void delayWait();
		static void delayStopWait();
	static bool waiting;
	private:
		static bool configured;
		int timer;
		static int dtimer;
		static int gtimer;
		
};

#endif
