//Lab Exercise 4/20/2020 Problem 3
//Author: 

#include <iostream>
using namespace std;

bool isTriangular(int, int&);
void printTriangle(int);

int main()
{
	int number, tri;
	cout << "Enter an integer: ";
	cin >> number;
	if (isTriangular(number, tri))
		printTriangle(tri);
	else
		cout << "Number is not triangular" << endl;
	return 0;
}

bool isTriangular(int num, int & t)
{
	//Add code here


}

void printTriangle(int t)
{
	for (int i = 1; i <= t; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << "X";
		cout << endl;
	}
	cout << endl;
}
