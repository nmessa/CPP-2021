//Lab Exercise 3/30/2021 Problem 3
//Author: 

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int numWords(char *);
double averageLength(char *);

int main()
{
	double average;
	char myString[] = "take me to your leader";
	average = averageLength(myString);
	cout << fixed << showpoint << setprecision(2);
	cout << myString << " has average length of " << average << " characters per word\n";
	return 0;
}

//This function will count the number of words in a C string
int numWords(char *str)
{	
	//Create 2 char pointers and a count variable
	char *pFirst, *pLast;
	int count;					
	
	//set to one to handle fencepost
	//Add code here	

	//set pointer to start of string
	//Add code here	

	//set pointer to end of string
	//Add code here	

	//Loop until pointers 'meet'
	//Add code here	
	return count;
}

//This function returns the average length of a string passed to it
double averageLength(char *str)
{
	//Declare variables
	int words;
	double average;

	//Call numWords and 
	//Add code here	

	//Calculate the average word length
	//Hint: average = length of string / number of words
	//Remember this is a C-Style string so you can't use the Length property
	//you have to use the strlen function
	//Add code here	 

	return average;
}

//Output
//take me to your leader has average length of 4.40 characters per word