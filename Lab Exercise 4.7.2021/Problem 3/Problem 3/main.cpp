//Lab Exercise 4.7.2021 Problem 3
//Author: 
#include <iostream>
#include <iomanip>
using namespace std;

bool profitableGamble(double, int, int);

int main()
{
	cout << boolalpha;
	cout << profitableGamble(0.2, 50, 9) << endl;
	cout << profitableGamble(0.9, 1, 2) << endl;
	cout << profitableGamble(0.9, 3, 2) << endl;
	return 0;
}

bool profitableGamble(double prob, int prize, int pay)
{
	//Add code here

}

//Output
//true
//false
//true