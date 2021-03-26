//Lab Exercise 3/30/2021 Problem 4
//Author: 

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	//Declare variables
	char myNumber[20];  //Holds number in C-String format
	int sum = 0;

	//Get integer from user as a C-String
	cout << "Enter an integer: ";
	cin >> myNumber;

	//Loop through the C-String
	for (int i = 0; i < strlen(myNumber); i++)
	{
		//Add ASCII value to sum with ASCII offset of 48
		//Hint: int('0') will give ASCII value of 48
		//Add code here			

	}

	//Output results
	//Add code here	

	return 0;
}

//Sample Output
//Enter an integer: 1234
//The sum of 1234 is 10