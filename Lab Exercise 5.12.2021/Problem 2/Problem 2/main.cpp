//Lab Exercise 5/12/2021 Problem 2
//Driver program to test the BigInt class
//Author: nmessa

#include <iostream>
using namespace std;
#include "bigint.h"

BigInt fibonacci(BigInt);

int main()
{
	BigInt fib;
	int number;
	cout << "Enter a number: ";
	cin >> number;
	fib = fibonacci(number);
	cout << "The " << number << "th Fibonacci number = " << fib << endl;
    return 0;
}

//Recursive Fibonacci Function
BigInt fibonacci(BigInt n)
{
	//Add code here


}
