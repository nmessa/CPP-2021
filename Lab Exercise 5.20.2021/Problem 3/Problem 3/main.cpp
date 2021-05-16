//Lab Exercise 5.20.2021 Problem 3
//Author: 
//Use long long integer to handle very large numbers (600851475143)

#include <iostream>
#include <vector>
using namespace std;

//Function prototyypes
bool isPrime(long long);
vector<long long> factor(long long);

int main()
{
	//Declare variables
	long long number;
	vector<long long> vect;

	//Get number from user to factor
	cout << "Enter a number to factor: ";
	cin >> number;

	//Pass number to factor function which returns a vector of prime factors
	vect = factor(number);

	//Print the factors stored in the vector
	for (int i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";
	return 0;
}

//This function returns a boolean value depending on whether or not
//the value passed to it is prime
//A long long is used as a parameter type to handle large integers
//Also checking division by the square root of number to 
//improve efficiency
bool isPrime(long long num)
{
	for (int i = 2; i <= sqrt((double)num); i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}


//This function will find and return a vector of prime factors of the number
//passed to it
//The number passed to it is a long long to handle large integers
vector<long long> factor(long long num)
{
	//Add code here


}