//Lab Exercise 5.22.2019 Problem 2
//Author: nmessa

#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int);
void printDualPrimes(vector<int>);

int main()
{
	//Declare variables
	vector<int> v;
	int number;

	//Get upper bound of prime numbers from user store in number
	//Add code here


	//Fill vector with prime numbers
	//Add code here


	//Send vector to printDualPrimes
	//Add code here


	return 0;
}

//This function returns a boolean value depending on whether or not the 
//number passed to it is prime
bool isPrime(int num)
{
	for(int i = 2; i < num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

//This function will parse the vector printing out dual primes
//It also keeps track of the number of dual primes found
void printDualPrimes(vector<int> vect)
{
	int count = 0;
	//Add code here



	cout << count << " dual primes found" << endl;
}