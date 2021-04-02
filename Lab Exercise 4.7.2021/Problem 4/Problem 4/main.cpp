//Lab Exercise 4.7.2021 Problem 4
//Author: 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

bool XO(string);

int main()
{
	cout << boolalpha;
	cout << XO("ooxx") << endl;
	cout << XO("xooxx") << endl;
	cout << XO("ooxXm") << endl;
	cout << XO("zpzpzpp") << endl;
	cout << XO("zzoo") << endl;
	return 0;
}

bool XO(string s)
{
	//declare and intialize variables
	string lc = "";
	int xCount = 0, oCount = 0;

	//Convert string to lower case
	for (int i = 0; i < s.length(); i++)
		lc += tolower(s[i]);

	//Count the x's and o's
	//Add code here


	//return true or false
	//Add code here

}

//Output
//true
//false
//true
//true
//false