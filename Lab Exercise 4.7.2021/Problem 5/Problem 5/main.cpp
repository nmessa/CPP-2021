//Lab Exercise 4.7.2021 Problem 5
//Author: 
#include <iostream>
#include <vector>
using namespace std;

vector<int> arrayOfMultiples(int, int);
void displayArray(vector<int>);

int main()
{
	displayArray(arrayOfMultiples(7, 5));
	displayArray(arrayOfMultiples(12, 10));
	displayArray(arrayOfMultiples(17, 6));
	return 0;
}

vector<int> arrayOfMultiples(int num, int length)
{
	//Create a vector of the appropriate size
	vector<int> ary(length);
	
	//Build an array of multiples
	//Add code here


	//return the vector
	return ary;
}

void displayArray(vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << "  ";
	cout << endl;
}

//Output
//7  14  21  28  35
//12  24  36  48  60  72  84  96  108  120
//17  34  51  68  85  102