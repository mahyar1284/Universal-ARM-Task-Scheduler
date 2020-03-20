# Universal-ARM-Task-Scheduler
You can create accurate delays and scheduling multi tasks easy in any ARM platform

first of all make sure to config the Delay library
then you can create delays using Delay::delay(int ms); command
and for task scheduling, create a task scheduler for every tasks like this : "Delay task1;"
then like the example file you can schedule your task;
if(task1.timerReached(500))
{
  //do something every 0.5 second
  task1.done();
}
