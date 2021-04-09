//Lab Exercise 4/15/2021 Problem 4
//Author: 

#include <iostream>
using namespace std;

//function prototype
void sumdiff(int &, int &);

int main()
{
	int number1 = 20, number2 = 10;
	sumdiff(number1, number2);
	cout << "Sum: " << number1 << endl;
	cout << "Difference: " << number2 << endl;
	return 0;
}

//This function returns as a reference parameter the sum and difference of two integers passed to it.
void sumdiff(int &n1, int &n2)
{
	//Add code here

}

//Output
//Sum: 30
//Difference: 10