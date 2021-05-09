//Queue class definition (queue.h)
#ifndef QUEUE_H
#define QUEUE_H
#include "ProcessList.h"
#include "process.h"

class Queue
{
	private: 
		ProcessList queue;
		int size;
	public:
		Queue();
		void enqueue(Process);
		Process dequeue();
		bool checkEmpty();
		void display();
};
#endif
