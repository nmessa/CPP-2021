//Lab Exercise 4.6.2021 Problem 3
//Author: 

#include <iostream>
using namespace std;

//Function prototype
int collatz(int);

int main()
{
	int longest = 0;
	int sequence, max;
	
	for (int num = 1; num <= 1000000; num++)
	{
		sequence = collatz(num);
		if (sequence > longest)
		{
			longest = sequence;
			max = num;
		}
	}
	cout << longest << " is the length from the value " << max << endl;
	

	return 0;
}

//This function returns the length of a collatz sequence for an integer n
int collatz(int n)
{
	int count = 1;
	//Add code here



	return count;
}

