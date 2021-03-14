//Lab Exercise 3.17.2021 Problem 2
//Author: 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define SIZE 500

//Function prototypes
void fillArray(int []);
void sortNumbers(int []);
void displayNumbers(int []);

int main()
{
	int numbers[SIZE];
	srand(time(NULL));
	fillArray(numbers);
	cout << "The numbers generated are: " << endl;
	displayNumbers(numbers);
	sortNumbers(numbers);
	cout << "\n\n\nNumbers after sorting:" << endl;
	displayNumbers(numbers);
	return 0;
}

//Sorts an array in descending order
//Use any sorting algorithm from problem 1
void sortNumbers(int n[])
{
	//Add code here

}

//Displays the contents of an array of numbers
void displayNumbers(int n[])
{
	//Add code here

}

//Fills an array with 500 random numbers from 0 - 999
void fillArray(int n[])
{
	//Add code here

}
