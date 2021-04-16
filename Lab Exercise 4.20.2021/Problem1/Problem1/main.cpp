//Lab Exercise 4/19/2021 Problem 1
//Author: 

#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int);

int main()
{
	int number = 2010;
	int count = 0;

	while (!isPerfectSquare(number))
	{
		//Increment number and count
		//Add code here


	}
	cout << number << endl;
	cout << count << endl;

	return 0;
}

bool isPerfectSquare(int num)
{
	int num2 = (int)sqrt((double)num);
	if (num2 * num2 == num)
		return true;
	else
		return false;
}
