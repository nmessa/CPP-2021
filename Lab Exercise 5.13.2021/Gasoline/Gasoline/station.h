//Station class definition file
//Author: nmessa

#include "pump.h"
#include <vector>
#include <iostream>
using namespace std;

class Station
{
public:
	Station();
	double totalSales();
	void resetAll();
	void closeStation();
	void fillTank(int, double);

//private:
	double myBasePrice;
	double grandTotal; 
	vector<Pump> myPumps;
};