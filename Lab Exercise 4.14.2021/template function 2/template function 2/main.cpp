//Template function demo 2
//Author: nmessa

#include <iostream>
using namespace std;

template<class T>
void total(T &, int);	//reference parameter

int main()
{
	int num = 3;		//number of values adding
	double sum;			//This determines the type being returned (by reference)
	total(sum, num);
	cout << "The sum of the " << num << " values is " << sum << endl;
	return 0;
}

template<class T>
void total(T &sum, int n)
{
	T value;
	cout << "Enter the first value: ";
	cin >> sum;
	for(int i = 1; i < n; i++)
	{
		cout << "Enter a value: ";
		cin >> value;
		sum += value;
	}
}

//Sample output
//Enter the first value: 4.3
//Enter a value: 2.5
//Enter a value: 1.1
//The sum of the 3 values is 7.9