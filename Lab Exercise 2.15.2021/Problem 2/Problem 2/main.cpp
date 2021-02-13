//Lab Exersise 2/15/2021 Problem 2
//Author: 

#include <iostream>
#include <cmath>
using namespace std;

//Define a constant value for PI
#define PI 4*atan(1.0)

//Function prototype
double probability(double, double, double);

int main()
{
	//Declare variables
	double mean, sd, x, px;

	//Get the mean, standard deviation, and value of x
	//Add code here




	//Find the probability of random variable x occuring
	//Add code here


	//Print the result
	cout << "P(" << x << ") = " << px << endl;
	return 0;
}

//This function passed the mean, standard deviation, and value of random variable x
//returns the probability of that random variable occuring
double probability(double mu, double sigma, double x)
{
	double d, prob;
	//Add code here


	return prob;
}

//Output
//Enter the mean: 10
//Enter the standard deviation: 1
//Enter the value of X: 10
//P(10) = 0.398942