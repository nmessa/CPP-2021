//Lab Exercise 3/19/2021 Problem 2
//Author: 

#include <iostream>
using namespace std;

//Function prototype
int countBits(int);

int main()
{
	int number, bits;
	cout << "Enter an integer: ";
	cin >> number;
	bits = countBits(number);
	cout << number << " contains " << bits << " one bits" << endl;
	return 0;
}

//Returns the number of bits in the binary equivalent of the 
//decimal number
int countBits(int num)
{
	int count = 0;

	//Keep counting as long as num is greater than 0
	while (num > 0)
	{
		//Add 1 to count is the last bit is 1
		//Hint: the easy way to do this is adding num%2 to count
		//Add code here


		//Divide number by 2
		//Add code here

	}
	return count;
}

// Output
// Enter an integer: 127
// 127 contains 7 one bits