//Decimal to binary converter
//Added IEEE 754 representation
//Author: 
//IEEE 754 Revision 2.3.2016
//Lab Exercise 3.25.2021 Problem 4

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

#define SIZE 53    //Size of mantissa of IEEE754 floating point
					//representation

//Function prototypes
void fillArray(double []);
void convertWhole(int, string &);
string reverseString(string);
void convertFraction(double, string &, double []);

int main()
{
	//Variable declarations
	double values[SIZE];
	string answer = "";
	double number;
	int whole;
	double fraction;
	int exp;
	string sign, exponent, mantissa;
	

	fillArray(values);
	cout << "Enter a floating point number: ";
	cin >> number;

	//Determine the sign bit
	if (number < 0)
	{
		number = -number;
		sign = "1";
	}
	else
		sign = "0";


	//Break apart the number in a whole and fraction components
	whole = int(number);
	fraction = number - whole;

	//Generate binary equivalent of decimal number
	convertWhole(whole, answer);
	answer += ".";  //Add a decimal point to seperate whole and fraction
	convertFraction(fraction, answer, values);

	//Find the power
	exp = answer.find(".") - 1;
	exp += 1023;		//Add bias
	convertWhole(exp, exponent);

	//Find the mantissa of the number
	mantissa = answer.substr(1, answer.find(".")-1) + answer.substr(answer.find(".") + 1);

	//Output the result
	cout << number << " = " << answer << endl;
	cout << "IEEE 754 format" << endl;
	cout << sign << " " << exponent << " " << mantissa << endl;
	cout << "Hit any key to continue";
	getch();
	return 0;
}

/*****************************************************************
** This function will fill an array with the decimal equivalent **
** of 1/2, 1/4, 1/8, 1/16 ....                                  **
**                                                              **
*****************************************************************/
void fillArray(double arr[])
{
	//Add code here

}

/*****************************************************************
** This function will convert a whole number into a binary      **
** number by performing successive division and saving the      **
** remainders in a sting                                        **
** Note: requires reversing the resultant string                **
*****************************************************************/
void convertWhole(int num, string &s)
{
	//Add code here

}

/*****************************************************************
** This function reverses a string that is given to it          **
**                                                              **
*****************************************************************/
string reverseString(string s)
{
	//Add code here

}

/*****************************************************************
** This function will generate the bit sequence for the         **
** fractional part of a decimal number                          **
**                                                              **
*****************************************************************/
void convertFraction(double num, string &s, double arr[])
{
	// num contains the fractional part of a number
	// &s is a reference parameter to the original string
	// arr[] contains successively smaller powers of 1/2
	//Add code here

}

//Sample Output
//Enter a floating point number: 37.876
//37.876 = 100101.11100000010000011000100100110111010010111100011000000
//IEEE 754 format
//0 10000000100 0010111100000010000011000100100110111010010111100011000000