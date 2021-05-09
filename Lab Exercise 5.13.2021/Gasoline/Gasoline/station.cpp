//Station class implementation file
//Author: 

#include "station.h"
#include<fstream>
using namespace std;

Station::Station()
{
	//Set base price to 6.89
	myBasePrice = 6.89;
	ifstream reader;
	reader.open("sales.txt");
	reader >> grandTotal;
	cout << "Station is open" << endl;
	cout << "Total sales for this station: $" << grandTotal << endl;

	//Create 4 Pump objects and add them to the myPumps vector
	//Add code here



}

double Station::totalSales()
{
	double total = 0.0;
	//Add code here


	return total;
}

void Station::resetAll()
{
	//Add code here


}

void Station::fillTank(int p, double gals)
{
	//Add code here
}

void Station::closeStation()
{
	ofstream logFile;
	logFile.open("sales.txt");
	grandTotal += totalSales();
	cout << "\n\n\nClosing the station" << endl;
	cout << "The total for the day is $" << totalSales() << endl;
	logFile << grandTotal << endl;
	resetAll();
	cout << "Station closed" << endl;
	logFile.close();
}

