//Lab Exercise 5.20.2021 Problem 4
//Author: 

#include <iostream>
#include <sstream>
using namespace std;

bool isPalindromeNumber(int);

int main()
{
	//Declare variables
	int i, j, count, largest=0, number;

	//Generate all combinations of 3 digit numbers
	for (i = 100; i <= 999; i++)
	{
		for (j = 100; j <= 999; j++)
		{
			//Calculate product of two 3-digit numbers
			//Add code here


			//Check to see if the number is a palindrome
			if (isPalindromeNumber(number))
			{
				//Find number is largest
				//Add code here

			}
		}
	}

	//Output the result
	cout << "The largest palindrome number is " << largest << endl;
	return 0;
}


//This function will return a boolean value depending on whether or not
//the number passed to it is a palindrome
bool isPalindromeNumber(int n)
{
	//Declare varaibles
	stringstream ss;
	char *pFirst;
	char *pLast;
	string number;

	//Put number in a stringstream
	//Add code here


	//Take number out of stringstream as a string
	//Add code here


	//Set pointers to first and last character of string
	//Add code here


	//Test for palindrome
	//Add code here




	return true;
}
