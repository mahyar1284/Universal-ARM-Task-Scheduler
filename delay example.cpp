#include "delay.hpp"

int main()
{
	Delay::delayConfig(); // config
	

	while (1)
	{
		Delay::delay(500); //500 ms delay
	}
		
	return 0;
}
