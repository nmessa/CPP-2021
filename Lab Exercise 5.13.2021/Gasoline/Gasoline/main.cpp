//Lab Exercise 5.13.2021
//Author: 

#include <iostream>
#include "station.h"
using namespace std;

int main()
{
	Station shell;
	shell.fillTank(1, 12);
	shell.fillTank(2, 21);
	shell.fillTank(3, 7);
	shell.fillTank(4, 19);
	shell.closeStation();
	return 0;
}

//Sample Output
//Station is open
//Total sales for this station: $1251.32
//
//
//
//Closing the station
//The total for the day is $178.76
//Station closed