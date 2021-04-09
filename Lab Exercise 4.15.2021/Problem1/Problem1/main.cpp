//Lab Exercise 4/15/2021 Problem 1
//Author: 

#include <iostream>
using namespace std;

//Define weights in ounces
#define BINDER 21.0
#define CARTON 25.0

//Function prototype
double shippingCost(int);

int main()
{
	//Test cases
	cout << "$" << shippingCost(34) << endl;		//$55.32
	cout << "$" << shippingCost(8) << endl;			//$16.92
	return 0;
}

double shippingCost(int numberBinders)
{
	//Declare variables
	int boxes, leftovers, partialBox;
	double totalWeight;
	double cost;

	//Calculate boxes required
	//Add code here


	//Calculate partial boxes
	//Add code here


	//Calculate leftovers
	//Add code here


	//Calculate totalWeight
	//Add code here


	//Calculate cost
	//Use ceil function to take into account fractional pounds
	//Add code here
	
	return cost;
}


