//Lab Exercise 4/2/2021
//Author: 

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

//Data structure definition
struct Inventory
{
	string description;
	string partNumber;
	int quantity;
	double wholesale;
	double retail;
	string date;

	//Structure constructor
	Inventory(string d, string pn, int q, double ws, double ret, 
		string dt)
	{
		description = d;
		partNumber = pn;
		quantity = q;
		wholesale = ws;
		retail = ret;
		date = dt;
	}
};

//Function prototypes
void printRecords(vector<Inventory>);
void addRecord(vector<Inventory> &);	//reference parameter
void loadRecords(vector<Inventory> &);	//reference parameter
void editRecord(vector<Inventory> &);	//reference parameter
void displayRecord(vector<Inventory>);
void update(vector<Inventory>);

int main()
{
	vector<Inventory> wallyWorld;

	//Test all functions
	loadRecords(wallyWorld);
	printRecords(wallyWorld);
	//Uncomment to test various functions
	//editRecord(wallyWorld);
	//printRecords(wallyWorld);
	//displayRecord(wallyWorld);
	//addRecord(wallyWorld);
	//printRecords(wallyWorld);
	return 0;
}

//Display all records in database
void printRecords(vector<Inventory> ww)
{
	//Add code here


}

//Add a record to the database and update file
void addRecord(vector<Inventory> &ww)
{
	//Add code here

	
}

//Load data from file into database
void loadRecords(vector<Inventory> &ww)
{
	//Add code here

}

//Edit a record in the database and update file
void editRecord(vector<Inventory> &ww)
{
	//Add code here


}

//Display an individual record
void displayRecord(vector<Inventory> ww)
{
	//Add code here


}

//Update database to disk file
void update(vector<Inventory> ww)
{
	//Add code here

}
