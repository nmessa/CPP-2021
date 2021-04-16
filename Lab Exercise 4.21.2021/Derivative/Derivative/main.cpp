//Lab Exercise 4/20/2021 Problem 1
//Author: 

#include <iostream>
using namespace std;

double xt(double);

int main()
{
	double t, delta, x1, x2, deltaY, xdot;
	//Add code here


	cout << "The derivative at time " << t << " seconds is " 
		<< xdot << endl;
	return 0;
}

//function definition x(t) = 5t^2
double xt(double t)
{
	return 5 * t * t;
}

