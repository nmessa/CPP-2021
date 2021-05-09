//Class implementation of Schedular class
//Author: nmessa

#include "scheduler.h"

Scheduler::Scheduler()
{

}

void Scheduler::add(Process proc)
{
	scheduler.enqueue(proc);
}

Process Scheduler::remove()
{
	return scheduler.dequeue();
}

void Scheduler::display()
{
	scheduler.display();
}
