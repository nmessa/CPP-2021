//Lab Exercise 3/19/2021 Problem 3
//Author: 

#include <iostream>
#include <string>
using namespace std;

string convert(int, int, char []);
void reverseString(string &);

int main()
{
	int number, base;

	//Conversion array
	char values[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C',
		'D', 'E', 'F'};
	string converted;
	cout << "Enter an integer: ";
	cin >> number;
	cout << "Enter a base (2 - 16): ";
	cin >> base;
	converted = convert(number, base, values);
	cout << number << " = " << converted << " base " << base << endl;
	return 0;
}

string convert(int n, int b, char v[])
{
	int r;

	//This string is where the converted "number" is stored
	string answer = "";

	//This loop will save all of the remainders with LSB (least significant bit) first character and 
	//MSB (most significant bit) last character so it must be reversed
	while (n > 0)
	{
		//get the remainder of n divided by b and store in r
		//Add code here


		//Use r as the index of the translation array v and concatenate the character to the answer string
		//Add code here


		//divide the number by the base
		//Add code here

	}

	//Call the reverse string function and pass answer to it as a reference parameter
	//Add code here


	return answer;
}

void reverseString(string &str)
{
    int n = str.length();
 
    for (int i=0; i<n/2; i++)
       swap(str[i], str[n-i-1]);
}
