//Lab Exercise 4/8/2021 Problem 1 - 2
//Author: 

#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
	//Create a NumberList class object
	NumberList myList;

	//Insert nodes
	myList.insertNode(5.6);
	//Add code here for other node insertions

	//Display the list
	cout << "The List now contains: " << endl;
	//Add code here

	cout << endl << endl;

	//Delete 112.9 from the list (end of list)
	//Add code here


	//Delete 24.2 from the list (middle of list)
	//Add code here
	

	//Delete 5.6 from the list (beginning of list)
	//Add code here
		

	cout << "The List now contains: " << endl;
	//Display the list
	//Add code here


	return 0;
}
//Output
//The List now contains:
//5.6 --> 7.5 --> 12.8 --> 24.2 --> 31.6 --> 34.8 --> 44.5 --> 78.1 --> 78.5 --> 1
//12.9
//
//
//The List now contains:
//5.6 --> 7.5 --> 12.8 --> 31.6 --> 34.8 --> 44.5 --> 78.1 --> 78.5