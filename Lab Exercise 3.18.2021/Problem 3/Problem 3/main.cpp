//Lab Exercise 3.18.2021 Problem 3
//Author: 

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
#define EPSILON 0.000001

int main()
{
	int n = 0;
	double term1, term2;

	//Loop until the difference in the two terms is smaller
	//than EPSILON.  If loop ends convergence has occured
	do
	{
		//Calculate term1
		//Add code here

		//Calculate term2
		//Add code here


		//Increment n
		//Add code here

		//Output 2 terms
		//Add code here


	}while (abs(term1 - term2) > EPSILON);

	//Output the result
	//Add code here


	return 0;
}

//Output
//Terms to converge: 1738
//Final value: 1.0017311021