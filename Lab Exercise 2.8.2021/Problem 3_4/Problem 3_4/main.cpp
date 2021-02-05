//Lab Exercise 2/8/2021 Problem 3 and 4
//Author: 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Define constants
#define TRIALS 1000000
#define SCALE 3000

//Function prototypes
void printValues(int, int, int, int, int, int, int, int, int, int, int);
void printHistogram(int, int, int, int, int, int, int, int, int, int, int);

int main()
{	
	//Declare and initialize variables
	int two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0,
		nine = 0, ten = 0, eleven = 0, twelve = 0, die1, die2, total;

	//Initialize random number generator use system clock to seed
	srand(time(0));

	//Roll dice TRIALS times
	for (int i = 0; i < TRIALS; i++)
	{
		//Add code here

		
	}

	//Pass results to printValues function
	//Add code here


	//Pass results to printHistogram function
	//Add code here


	return 0;
}


//This function prints a table of roll values
void printValues(int v2, int v3, int v4, int v5, int v6, int v7, int v8,
	int v9, int v10, int v11, int v12)
{
	//Add code here


}

//This function prints a histogram of roll values using defined SCALE factor
void printHistogram(int v2, int v3, int v4, int v5, int v6, int v7, int v8,
	int v9, int v10, int v11, int v12)
{
	//Add code here


}

//Output
//Value   Frequency
//2       27819
//3       55385
//4       83746
//5       110925
//6       138923
//7       167237
//8       138206
//9       111202
//10      83578
//11      55234
//12      27745
//
//
//2       XXXXXX
//3       XXXXXXXXXXXXX
//4       XXXXXXXXXXXXXXXXXXXX
//5       XXXXXXXXXXXXXXXXXXXXXXXXXXX
//6       XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//7       XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//8       XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//9       XXXXXXXXXXXXXXXXXXXXXXXXXXX
//10      XXXXXXXXXXXXXXXXXXXX
//11      XXXXXXXXXXXXX
//12      XXXXXX