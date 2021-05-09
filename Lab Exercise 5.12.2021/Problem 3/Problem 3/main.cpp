//Lab Exercise 5/12/2021 Problem 3
//Driver program to test the BigInt class
//Author: 

#include <iostream>
using namespace std;
#include "bigint.h"

BigInt factorial(int);

int main()
{
	BigInt fact;
	int number;
	cout << "Enter a number: ";
	cin >> number;
	fact = factorial(number);
	cout << number << " factorial = " << fact << endl;
    return 0;
}

//Iterative factorial function
BigInt factorial(int num)
{
	BigInt value = 1;
	//Add code here


	return value;
}
