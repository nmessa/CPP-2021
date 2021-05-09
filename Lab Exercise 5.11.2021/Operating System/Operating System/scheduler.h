//Class definition of Schedular class
//Author: nmessa
#ifndef SCHEDULAR_H
#define SCHEDULAR_H
#include "queue.h"

class Scheduler
{
	private:
		Queue scheduler;
	public:
		Scheduler();
		void add(Process);
		Process remove();
		void display();
};
#endif
