//Lab Exercise 4.6.2021 Problem 1
//Author: 

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int);

int main()
{
	int sum = 0;
	//Add code here


	cout << sum << endl;
	return 0;
}

//One minute version
bool isPrime (int n)
{
	for (int i = 2; i <= sqrt(double(n)); i++)
		if (n % i == 0)
			return false;
	return true;
}

//One hour version
/*bool isPrime (int n)
{
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;
	return true;
}*/

