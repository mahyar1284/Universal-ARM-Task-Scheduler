#include "delay.hpp"

int main()
{
	Delay::delayConfig(); // config
	
	Delay task1; // declare task scheduler 1
	Delay task2; // declare task scheduler 2
	Delay task3; // declare task scheduler 3

	while (1)
	{
		if(task1.timerRiched(5000))
		{
			// do something every 5 seconds
			task1.done();
		}
		
		if(task2.timerRiched(1))
		{
			// do something every 1 milli seconds
			task2.done();
		}
		
		if(task3.timerRiched(300))
		{
			// do something every 0.3 seconds
			task3.done();
		}
	}
		
	return 0;
}
