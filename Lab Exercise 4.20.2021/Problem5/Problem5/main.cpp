//Lab Exercise 4.19.2021 Problem 5
//Author: 

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
bool testPalindrome(string);

int main()
{
	//Add code here


	return 0;
}

//This function test a string to see if it is a palindrome
bool testPalindrome(string s)
{
	//Create 2 character pointers
	char *pStart;
	char *pEnd;

	//Set the character pointers to start and end of string
	pStart = &s[0];
	pEnd = &s[s.length() - 1];

	//test for palindrome
	while (pStart <= pEnd)
	{
		if (*pStart != *pEnd)
			return false;
		pStart++;
		pEnd--;
	}
	return true;
}

//Output
//07311370
//08311380
//10022001
//01022010
//11022011
//02022020
//12022021
//03022030
//04022040
//05022050
//06022060
//07022070
//08022080
//09022090
//14 palindromic days