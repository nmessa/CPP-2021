//Lab Exercise 5/12/2021 Problem 4
//Driver program to test the BigInt class
//Author: 

#include <iostream>
using namespace std;
#include "bigint.h"

BigInt factorial(BigInt);

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

//Recursive factorial function
BigInt factorial(BigInt num)
{
	//Add code here


}
