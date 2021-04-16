//Lab Exercise 4/19/2021 Problem 6
//Author: 

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//Function prototype
bool isPalindromeNumber(int);

int main()
{
	//Declare variables
	int miles = 78988;
	double speed;
	bool found = false;

	//Loop over range of numbers to test
	while (!found)
	{
		//Test to see if palindrome found
		if (isPalindromeNumber(miles))
		{
			cout << miles << endl;
			found = true;
		}
		miles++;
	}

	//Calculate speed
	speed = (miles-78987)/2.0;
	cout << "Your speed is " << speed << " miles/hour" << endl;

	return 0;
}

//This function is passed an integer and test if it is a palindrome
bool isPalindromeNumber(int n)
{
	//Add code here

	

}

