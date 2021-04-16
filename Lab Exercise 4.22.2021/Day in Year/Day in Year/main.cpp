//Lab Exercise 4.21.2021 Problem 3
//Author: 

#include <iostream>
using namespace std;

bool isLeapYear(int);

int main()
{
	//Declare variables
	int year, month, day, total = 0;

	//Create arrays to hold days in each month
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  //regular year version
	int days2[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  //leap year version

	//Get month day and year from user
	//Add code here


	//Calculate the day of year
	if (isLeapYear(year))
	{
		//Add code here

	}
	else
	{
		//Add code here

	}

	//Output the result
	cout << month << "/" << day << "/" << year << " is day " << total << " of the year" << endl;
	return 0;
}

//This function will return a boolean value basee on whether or not the year passed to it is a leap year
bool isLeapYear(int y)
{
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		return true;
	else
		return false;
}