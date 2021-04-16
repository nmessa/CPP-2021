//Lab Exercise 4/20/2021 Problem 2
//Author: 

#include <iostream>
using namespace std;

double xt(double);

int main()
{
	double t1, t2, sum, t, delta;
	int n;
	//Add code here



	cout << "The value of the integral is " << sum << endl;
	return 0;
}

//Function definition for x(t) = 10t^2
double xt(double t)
{
	return 10 * t * t;
}

/* Output
Enter the time of the upper limit: 3
Enter the time of the lower limit: 1
Enter the number of integration steps: 1000
The value of the integral is 86.7667
*/
