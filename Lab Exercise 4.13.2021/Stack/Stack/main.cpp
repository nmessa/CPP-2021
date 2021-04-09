//Lab Exercise 4/28/2020
//Author: nmessa

#include <iostream>
using namespace std;
#include "MyStack.h"

int main()
{
	//Test code to test the Stack class
	MyStack stk;
	stk.push(10.7);
	stk.display();
	stk.push(23.4);
	stk.display();
	stk.push(27.4);
	stk.display();
	stk.push(21.2);
	stk.display();
	stk.push(13.6);
	stk.display();
	cout << stk.pop() << endl;
	stk.display();
	cout << stk.pop() << endl;
	stk.display();
	cout << stk.pop() << endl;
	stk.display();
	cout << stk.pop() << endl;
	stk.display();
	cout << stk.pop() << endl;
	stk.display();
	cout << stk.pop() << endl;
	stk.display();
	return 0;
}

//Output
//10.7
//23.4 --> 10.7
//27.4 --> 23.4 --> 10.7
//21.2 --> 27.4 --> 23.4 --> 10.7
//13.6 --> 21.2 --> 27.4 --> 23.4 --> 10.7
//13.6
//21.2 --> 27.4 --> 23.4 --> 10.7
//21.2
//27.4 --> 23.4 --> 10.7
//27.4
//23.4 --> 10.7
//23.4
//10.7
//10.7
//The stack is empty
//The stack is empty
//0
//The stack is empty