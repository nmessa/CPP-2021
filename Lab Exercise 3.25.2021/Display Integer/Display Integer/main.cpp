//Decimal to binary converter
//Author: nmessa
//Lab Exercise 3.25.2021 Problem 1

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

//Function prototypes
void convertWhole(int, string &);
string reverseString(string);

int main()
{
	//Variable declarations
	string answer = "";
	int number;
	
	cout << "Enter an integer: ";
	cin >> number;

	//Generate binary equivalent of decimal number
	convertWhole(number, answer);

	//Output the result
	cout << number << " = " << answer << endl;
	//This code allows you to run with debugging
	cout << "Hit any key to continue\n";
	getch();
	return 0;
}

/*****************************************************************
** This function will convert a whole number into a binary      **
** number by performing successive division and saving the      **
** remainders in a sting                                        **
** Note: requires reversing the resultant string                **
*****************************************************************/
void convertWhole(int num, string &s)
{
	string out = "";

	//Build the string of remainders
	while (num > 0)
	{
		if (num % 2)
			out += '1';
		else
			out += '0';
		num /= 2;
	}
	//Reverse the string
	s = reverseString(out);
}

/*****************************************************************
** This function reverses a string that is given to it          **
**                                                              **
*****************************************************************/
string reverseString(string s)
{
	string temp = "";
	for (int i = s.length() - 1; i >= 0; i--)
	{
		temp += s[i];
	}
	return temp;
}

//Sample Output
//Enter an integer: 37
//37 = 100101