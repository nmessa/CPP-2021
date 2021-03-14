//Lab Exercise 3/19/2021 Problem 4
//Author: 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define EPSILON 0.00001

int main()
{
	double x = 1.0;
	double libSqrt;
	int iterations = 0;

	//Keep looping while the difference between x and 2/x is less than EPSILON
	do 
	{
		//Calculate new value for x
		//Add code here


		//increment iterations counter
		//Add code here

	}while (abs(x - 2/x) > EPSILON); //Why use the absolute value of the difference?

	//Get the Math library value for sqrt and store in libSqrt
	//Add code here


	//Output report
	//Add code here



	return 0;
}

//Output
//Square root of 2 = 1.41421569
//Found in 3 iterations
//Square root of 2 using math library = 1.41421356
//The difference is: : 0.00000212