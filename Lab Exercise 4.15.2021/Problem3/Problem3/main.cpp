//Lab Exercise 4/15/2021 Problem 3
//Author: 

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

//Function prototypes
void getLuckyNumbers(vector<int> &);
void displayLuckyNumbers(vector<int>);
bool inVector(int, vector<int>);

int main()
{
	//declare variable to hold a random number
	int rNumber;

	//declare and initialize an array of phrases
	string phrases[] = {"I Love C++", "I Love Java", "I Love Python", 
		"I Love COOL", "I Love Assembly Language", "I Love Processing"};

	//Initialize random number generator off system clock
	srand(time(NULL));

	//create a vector to hold the lucky numbers
	vector<int> luckyNumbers;
	
	//pick a random number from 0 to 5
	rNumber = rand() % 6;	

	//Display the random phrase
	//Add code here


	//pick lucky numbers by passing vector luckyNumbers to getLuckyNumbers function
	//Add code here
	

	//Display the lucky numbers by passing the vector luckyNumbers to displayLuckyNumbers
	//Add code here

	return 0;
}

//Generate 5 unique random numbers
void getLuckyNumbers(vector<int> &nums)
{
	//Declare variables
	int rn, count = 0;

	//Keep looping until you have 5 unique lucky numbers
	while (count < 5)
	{
		//Generate a random number from 1 to 99 and store in rn
		//Add code here


		//if random number not in vector nums then add to vector and increment count
		//use the inVector function to test if rn is in nums
		if (!inVector(rn, nums))			
		{
			//Add code here

		}
	}
}

//Display the lucky number vector
void displayLuckyNumbers(vector<int> nums)
{
	//Add code here

}

//Function to test if a number already exists in the vector
bool inVector(int number, vector<int> nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		if (number == nums[i])
			return true;
	}
	return false;
}

//Output
//I Love Python
//82   27   52   33   93