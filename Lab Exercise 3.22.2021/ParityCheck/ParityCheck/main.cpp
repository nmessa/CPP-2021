//Lab Exercise 3.22.2021 Problem 1
//Author: 

#include <iostream>
#include <string>
using namespace std;

//Function prototypes
string parity(char);
string convertToBinary(char);
int countBits(int);

int main()
{
	string toConvert;
	string converted = "";
	cout << "Enter a string to convert (without spaces): ";
	//use getline() to have spaces allowed
	cin >> toConvert;

	//Send character by character for conversion to parity string
	for (int i = 0; i < toConvert.length(); i++)
		converted += parity(toConvert[i]);

	//Output the new parity string
	cout << "The parity string is now: " << converted << endl;
	return 0;
}


//This function returns the parity string for a character
string parity(char ch)
{
	string base2;
	int numOnes;

	//find the number of 1's
	//Used to determine the value parity bit
	//Add code here

	//Convert the character to a binary string
	//Get binary equivalent of a character
	//Add code here


	//Add the parity bit to the end of the parity string
	//If the number of 1's in the character is even, add '0' to the end of the string
	//Add code here


	//else if number of 1's in the character is odd, add '1' to the end of the string
	//Add code here


	return base2
}

string convertToBinary(char ch)
{
	int num = int(ch);
	string forward = "";
	string reversed = "";

	//Keep looping until num is 0
	while (num > 0)
	{
		//If remainder 0 add '0' to string
			//Add code here

		//or else Add '1' to string
			//Add code here

		//divide num by 2
		//Add code here

	}
	
	//Reverse the string
	for (int i = forward.length() - 1; i >= 0; i--)
	{
		//Add code here

	}

	//Pad string to 8 bits
	return '0' + reversed;
}

//This function will return the number of 1's in the ASCII value
int countBits(int num)
{
	//Add code here


}

//Sample Output
//Enter a string to convert (without spaces): hello
//The parity string is now: 011010001011001010011011000011011000011011110