//Lab Exercise 3/31/2021 Problem 1
//Author: nmessa
//This program is complete and you can use it to solve the other problems

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//Declare varaibles
	ifstream infile;
	string line;

	//Open main.cpp
	infile.open("main.cpp");

	//Keep looping until you hit end of file
	while (!infile.eof())
	{
		//Read a line from infile using getline and store in line
		getline(infile, line);

		//Output a line
		cout << line << endl;
	}
	infile.close();
	
	return 0;
}
