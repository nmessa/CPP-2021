//Lab Exercise 3/22/2021 Problem 2
//Author: nmessa

#include <iostream>
#include <string>

using namespace std;

//Function prototype
bool isValidProductCode(string);

int main()
{
	string code;
	cout << "Enter the UPC: ";
	cin >> code;
	
	if (isValidProductCode(code))
		cout << "Code is valid" << endl;
	else
		cout << "Code is not valid" << endl;
	return 0;
}

//This function will return the validity of a UPC
bool isValidProductCode(string c)
{
	int sum = 0;
	//add up the evens
	//do not forget to subtract 48 (ASCII value for 0) from the character value
	//Add code here


	//add up the odds
	for (int i = 1; i < 12; i += 2)
		sum += int(c[i] - 48);

	//Test if valid and return true or false
	//Add code here


}

//Output for a bottle of Diet Pepsi
//Enter the UPC: 012000504068
//Code is valid