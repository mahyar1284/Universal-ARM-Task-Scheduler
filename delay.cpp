#include "delay.hpp"
#include "InterruptController.hpp"
int Delay::dtimer=0;
int Delay::gtimer=0;
bool Delay::waiting=0;
bool Delay::configured=0;

Delay::Delay() : timer(gtimer)
{
	delayConfig();
}

void Delay::delayConfig()
{
	if(!configured)
	{
		InterruptAttach(&SysTick_Handler_CallBack,&InterruptCallBack);
		
		SysTick_Config(SystemCoreClock/1000);
		NVIC_EnableIRQ(SysTick_IRQn);
		
		// === manual systick configuration for cortex m3 and m4
		
//		SysTick->LOAD  = (uint32_t)(72000 - 1UL);                         /* set reload register */
//		NVIC_SetPriority (SysTick_IRQn, (1UL << __NVIC_PRIO_BITS) - 1UL); /* set Priority for Systick Interrupt */
//		SysTick->VAL   = 0UL;                                             /* Load the SysTick Counter Value */
//		SysTick->CTRL  = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_TICKINT_Msk;
//		SysTick->CTRL  |= SysTick_CTRL_ENABLE_Msk;
//		configured=true;
	}
}

void Delay::delay(int ms)
{
	delayWait();
	while(dtimer<ms)
	{
		asm("nop");
	}
	delayStopWait();
	Delay::clearDelayTimer();
}
void Delay::delay_us(int us)
{
	//delayWait();
	volatile int timer=0;
	while(timer<(us))
	{
		timer++;
	}
	//delayStopWait();
	//Delay::clearDelayTimer();
}
void Delay::delayStopWait()
{
	waiting=0;
}

void Delay::delayWait()
{
	waiting=1;
}

bool Delay::isDelayWaiting()
{
	return waiting;
}

void Delay::done()
{
	timer = gtimer;
}

void Delay::clearDelayTimer()
{
	dtimer = 0;
}

inline void Delay::increaseTimer()
{
	gtimer++;
}
inline void Delay::increaseDelayTimer()
{
	dtimer++;
}

bool Delay::timerRiched(int64_t time)
{
	if((time+timer)>=gtimer)
		return 0;
	else
		return 1;
}
inline void Delay::InterruptCallBack()
{
	increaseTimer();
	if(isDelayWaiting())
		increaseDelayTimer();
}
//extern "C" void SysTick_Handler()
//{
//	Delay::increaseTimer();
//	if(Delay::isDelayWaiting())
//		Delay::increaseDelayTimer();
//}













