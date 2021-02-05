//Lab Exercise 2.9.2021 Problem 2
//Author: 

#include <iostream>
#include <string>
using namespace std;

//Function prototypes
double getSales(string);
void findHighest(double, double, double, double);

int main()
{
	//Declare variables
	string division;
	double salesNE, salesSE, salesNW, salesSW;

	//Call getSales function for each geographic area
	//Add code here



	//Pass sales totals for each geographic area to findHighest function
	//Add code here


	return 0;
}

//This function gets a division name and returns the amount of sales
double getSales(string division)
{
	double amount;
	//Add code here


	return amount;
}

//This function is passed the sales for each division and prints the name and sales amount for the division
//with the highest sales
void findHighest(double salesNE, double salesSE, double salesNW, double salesSW)
{
	string name;
	double max;
	//Add code here



	cout << "The highest sales was " << name << " division" << endl;
	cout << "Sales: " << max << endl;
}

