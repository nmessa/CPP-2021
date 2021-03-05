//Lab Exercise 3.8.2021 Problem 2
//Author: 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Function prototypes
double findAverage(double []);
string findWettest(double [], string []);
string findDryest(double [], string []);
void printReport(double, string, string);

int main()
{
	//Variable declarations
	string months[] = {"January", "February", "March", "April", "May",
		"June", "July", "August", "September", "October", "November",
		"December"};
	double temperatures[12];
	string wetMonth, dryMonth;
	double average;

	ifstream infile;
	infile.open("tempData.txt");
	for(int i = 0; i < 12; i++)
		infile >> temperatures[i];  //read in data
	infile.close();

	//Process data
	average = findAverage(temperatures);
	dryMonth = findDryest(temperatures, months);
	wetMonth = findWettest(temperatures, months);

	//Output report
	printReport(average, dryMonth, wetMonth);
	return 0;
}

//Calculates and returns the average temperature
double findAverage(double temps[])
{
	//Add code here

}

//Returns the name of the month with the most rainfall
string findWettest(double temps[], string m[])
{
	//Add code here

}

//Returns the name of the month with the least rainfall
string findDryest(double temps[], string m[])
{
	//Add code here

}

//Prints a report of the rainfall data
void printReport(double avg, string dry, string wet)
{
	//Add code here

}

//Output
//Average rainfall = 7.81667
//Dryest month = August
//Wettest month = April