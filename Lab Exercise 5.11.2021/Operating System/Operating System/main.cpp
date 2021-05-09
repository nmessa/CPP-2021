//Lab Exercise 5/11/2021
//Author: 

#include <iostream>
using namespace std;
#include "process.h"
#include "scheduler.h"
#include "interuptProcess.h"

int main()
{
	//Create processes
	Process test(123, "fork");
	Process test1(345, "panic");
	Process test2;
	Process *test3;  //Pointer to a process

	//Test code for Process class
	//Make test2 a clone of test1
	//Add code here



	//Create a Process (test3) with process ID of 678 and named "help"
	//Add code here


	//Display the processes test, test1, test2, and test3 (remember test3 is a pointer to a process)
	//Add code here



	//Destroy process test3
	//Add code here



	//Create 5 Process objects (p1, p2, p3, p4, p5) for testing of Scheduler and
	//InteruptProcess class.  Give them process id's of 867, 5309, 6732, 2134, and 328.  
	//Application names are WinAmp, Word, Netscape, Mosaic, and Wordstar
	//Add code here




	//Test Schedular class
	//Create a Schedular object s and add the 5 processes (p1, p2, p3, p4, and p5) to the schedular 
	//and display the schedular
	//Add code here



	//Display the schedular queue
	//Add code here



	//Test InteruptProcess class
	//Create an InteruptProcess class object i
	//Add code here


	//Remove 2 processes from the schedular and add them to the InteruptProcess class object
	//Add code here



	//Display the schedular queue
	//Add code here



	//Display the interupt stack
	//Add code here



	cout << endl << endl;
	return 0;
}

//Output
//Process 123 Object created
//Process 345 Object created
//Process 678 Object created
//Original Process: 123  fork
//Second Original Process: 345  panic
//Cloned Process: 345  panic
//Created Process: 678  help
//Process 678 Object memory freed
//Process 867 Object created
//Process 5309 Object created
//Process 6732 Object created
//Process 2134 Object created
//Process 328 Object created
//Scheduler queue
//867/WinAmp --> 5309/Word --> 6732/Netscape --> 2134/Mosaic --> 328/Wordstar
//
//
//Scheduler queue
//6732/Netscape --> 2134/Mosaic --> 328/Wordstar
//Interupt stack
//5309/Word --> 867/WinAmp
