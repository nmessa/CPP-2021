//Lab Exercise 4/15/2021 Problem 5
//Author: 

#include <iostream>
using namespace std;
#define MAXIMUM 4000000

//Function prototype
int fibonacci(int);

int main()
{
	//Declare variables
	int sum = 0;
	int number = 0;
	int fib;

	//Keep looping until the Fibonacci number is MAXIMUM
	do
	{
		//Find Fibonacci number by passing number to fibonacci function and store returned value in fib
		//Add code here


		//if fib is even, add it to sum
		//Add code here


		//Increment number
		//Add code here

	}while (fib < MAXIMUM);

	//Output the sum
	//Add code here


	return 0;
}

//This is a recursive function that returns the nth Fibonacci number
int fibonacci(int n)
{
	if (n == 0 || n == 1)  //Trivial case that breaks the recursion
		return n;
	else 
		return fibonacci(n - 1) + fibonacci(n - 2);
}

//Output
//4613732
