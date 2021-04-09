//MyQueue implementation file (MyQueue.cpp)
//Author: 
//Date: 4.13.2021
// Remember queue is a NumberList class object and has all of it's functions
// In this implementation nodes are added at the end of the list and removed from the front of the list
// that is why I wrote the getNode and appendNode functions

#include "MyQueue.h"
#include <iostream>
using namespace std;

//Constructor sets size to 0
MyQueue::MyQueue()
{
	//Add code here

}

//Adds node to queue using appendNode and increments size
void MyQueue::enqueue(double number)
{
	//Add code here

}

//Remove and element from queue but can not dequeue and empty queue
//Use checkEmpty function to test for empty
//if queue is empty give message and return 0
//if queue is not empty return node from front of queue using getNode
//And decrement size
double MyQueue::dequeue()
{
	if (checkEmpty())
	{
		//Add code here

	}
	else
	{
		//Add code here

	}
}

//return true if size is 0 and false otherwise
bool MyQueue::checkEmpty()
{
	//Add code here

}

//if size is 0, give a message that the queue is empty or else
//use the displayList function to display the queue
void MyQueue::display()
{
	//Add code here

}