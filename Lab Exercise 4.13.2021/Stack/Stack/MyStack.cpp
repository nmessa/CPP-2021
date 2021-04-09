// MyStack class implementation file (mystack.cpp)
// Author: 
// Date: 4.13.2021
// Remember stack is a NumberList class object and has all of it's functions
// In this implementation nodes are added and removed from the front of the list
// that is why I wrote the getNode and prependNode functions

#include "MyStack.h"
#include <iostream>
using namespace std;

//Constructor sets size to 0
MyStack::MyStack()
{
	//Add code here

}

//use prependNode to add number to to stack and increment stack size
void MyStack::push(double number)
{
	//Add code here

}

//Removes an element from the stack using getNode
//Only pop if the stack is not empty (use checkEmpty function)
//If the stack is empty, give a message and return 0
//If it is not empty decrement size and return the first element using getNode
double MyStack::pop()
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

//return true of size is 0 or else return false
bool MyStack::checkEmpty()
{
	//Add code here

}

//if size is 0 give message that stack is empty
//if size is not 0, use displayList to display the stack
void MyStack::display()
{
	//Add code here

}