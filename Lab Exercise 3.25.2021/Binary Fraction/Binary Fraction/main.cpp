//Decimal to binary converter (Fraction part)
//Author: nmessa
//Lab Exercise 3.25.2021 Problem 2
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

#define SIZE 53    //Size of mantissa of IEEE754 floating point
					//representation

//Function prototypes
void fillArray(double []);
void convertFraction(double, string &, double []);

int main()
{
	//Variable declarations
	double values[SIZE];
	string answer = "";
	double number;
	

	fillArray(values);
	cout << "Enter a floating point number less than 1: ";
	cin >> number;

	//Generate binary equivalent of decimal number
	answer += "0.";  //Add a decimal point to seperate whole and fraction
	convertFraction(number, answer, values);

	//Output the result
	cout << number << " = " << answer << endl;
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
	double den = 2.0;
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = 1.0/den;
		den *= 2.0;
	}
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
	for (int i = 0; i < SIZE; i++)
	{
		if (num >= arr[i])  //add a 1 to the string
		{
			s += "1";
			num -= arr[i];  //reduce num by the amount accounted 
			                //for by the one in place
		}
		else
			s += "0";       //add a 0 to the string
	}
}

//Sample Output
//Enter a floating point number less than 1: 0.45678
//0.45678 = 0.01110100111011111000100010111001011101111000010101110