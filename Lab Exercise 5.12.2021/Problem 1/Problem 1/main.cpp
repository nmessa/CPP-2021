//Lab Exercise 5/12/2021 Problem 1
//Driver program to test the BigInt class
//Author: 

#include <iostream>
using namespace std;
#include "bigint.h"

BigInt fibonacci(int);

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

//Iterative Fibonacci function
BigInt fibonacci(int num)
{
	BigInt value = 1;
	//Add code here


	return value;
}

//Sample Output
//Enter a number: 500
//The 500th Fibonacci number = 139423224561697880139724382870407283950070256587697307264108962948325571622863290691557658876222521294125