//Lab Exercise 4/13/2021
//Author: 
#include <iostream>
using namespace std;
#include "MyQueue.h"

int main()
{
	//Test code to test Queue class
	MyQueue que;
	que.enqueue(13.9);
	que.display();
	que.enqueue(27.6);
	que.display();
	que.enqueue(11.4);
	que.display();
	que.enqueue(16.4);
	que.display();
	que.enqueue(21.9);
	que.display();
	cout << que.dequeue() << endl;
	que.display();
	cout << que.dequeue() << endl;
	que.display();
	cout << que.dequeue() << endl;
	que.display();
	cout << que.dequeue() << endl;
	que.display();
	cout << que.dequeue() << endl;
	que.display();
	cout << que.dequeue() << endl;
	que.display();
	return 0;
}

//Output
//13.9
//13.9 --> 27.6
//13.9 --> 27.6 --> 11.4
//13.9 --> 27.6 --> 11.4 --> 16.4
//13.9 --> 27.6 --> 11.4 --> 16.4 --> 21.9
//13.9
//27.6 --> 11.4 --> 16.4 --> 21.9
//27.6
//11.4 --> 16.4 --> 21.9
//11.4
//16.4 --> 21.9
//16.4
//21.9
//21.9
//The queue is empty
//The queue is empty
//0
//The queue is empty