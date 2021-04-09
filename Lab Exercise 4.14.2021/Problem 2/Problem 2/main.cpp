//Lab Exercise 4/14/2021 Problem 2
//Author: nmessa

#include <iostream>
using namespace std;

//Function prototype
template<class T>
void total(T &, int);	//reference parameter

int main()
{
	int num = 6;		//Number of values to add
	double sum;			//This determines the type being returned
	total(sum, num);
	cout << "The sum of " << num << " values is " << sum << endl;
	return 0;
}

template<class T>
void total(T &sum, int n)
{
	//Declare a variable value as type T
	T value;

	//Read in n values and add them to sum
	//Since sum is a reference parameter, that value will get back to main
	//Add code here

}

//Sample Output
//Enter a value: 1
//Enter a value: 2
//Enter a value: 3
//Enter a value: 4
//Enter a value: 5
//Enter a value: 6
//The sum of 6 values is 21