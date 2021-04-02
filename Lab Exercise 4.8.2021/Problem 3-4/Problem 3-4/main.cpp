//Lab Exercise 4/8/2021 Problem 3 and 4
//Author: 

#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
	//Create a NumberList object
	NumberList myList;

	//Insert nodes into list
	myList.insertNode(5.6);
	//Add code here to add other nodes


	//Display the list
	//Add code here


	//Prepend 2 nodes to the front of list (2.9 and 1.2 in that order)
	//Add code here


	//Display the modified list
	cout << endl << endl;
	cout << "After prepending 2.9 and 1.2" << endl;
	//Add code here


	//Display the list backwards
	cout << endl << endl;
	cout << "The list backwards" << endl;
	//Add code here

	return 0;
}

//Output
//5.6 --> 7.5 --> 12.8 --> 24.2 --> 31.6 --> 34.8 --> 44.5 --> 78.1 --> 78.5 --> 112.9
//
//
//After prepending 2.9 and 1.2
//1.2 --> 2.9 --> 5.6 --> 7.5 --> 12.8 --> 24.2 --> 31.6 --> 34.8 --> 44.5 --> 78.1 --> 78.5 --> 112.9
//
//
//The list backwards
//112.9 <-- 78.5 <-- 78.1 <-- 44.5 <-- 34.8 <-- 31.6 <-- 24.2 <-- 12.8 <-- 7.5 <-- 5.6 <-- 2.9 <-- 1.2