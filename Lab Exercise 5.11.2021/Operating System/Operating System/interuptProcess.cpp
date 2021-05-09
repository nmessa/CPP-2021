//Implementation of InteruptProcess class
//Author: nmessa

#include "interuptProcess.h"

InteruptProcess::InteruptProcess()
{

}

void InteruptProcess::add(Process proc)
{
	interupt.push(proc);
}

Process InteruptProcess::remove()
{
	return interupt.pop();
}

void InteruptProcess::display()
{
	interupt.display();
}