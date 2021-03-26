//Lab Exercise 3/30/2021 Problem 1
//Author: nmessa
//This program is complete.  You can use it to help
//you with the other programs

#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char *);

int main()
{
	//Create a C-String
	char myString[] = "hello I am here";
	cout << "Original C-string: " << myString << endl;
	reverseString(myString);
	cout << "Reversed C-string: " << myString << endl;
	return 0;
}

//This function will reverse the string in place
void reverseString(char *str)
{
	//Declare two char pointers
	char *pFirst, *pLast;

	//set pointer to start of string
	pFirst = str;

	//set pointer to end of string
	pLast = str + strlen(str) - 1;	

	//Loop until pointers 'meet'
	while (pLast > pFirst)			
	{
		//Swap the contents of what pointers are pointing at
		swap(*pFirst, *pLast);

		//increment pFirst
		pFirst++;

		//decrement pLast
		pLast--;				
	}
}

//Output
//Original C-string: hello I am here
//Reversed C-string: ereh ma I olleh