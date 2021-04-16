//Lab Exercise 4/19/2021 Problem 3
//Author: 

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;
#define TOTAL 80

int main()
{
	//Create an array of possible score values
	int numbers[] = {11, 13, 21, 23};

	//Declare variables
	int rNumber, score;
	bool found = false;

	//Create a vector to hold shot values
	vector<int> shots;

	//Initialize random number generator
	srand(time(0));

	//run simulation until a solution is found
	while (!found)
	{
		score = 0;
		//Clear the vector to run another trial
		//Add code here


		//run one trial
		while (score < 80)
		{
			//Generate a random number from 0 to 3
			

			//Add shot value from numbers array to score
			//Add code here


			//Add shot value to shots vector using push_back function
			//Add code here

		}

		//Check to see if solution found
		//if found set found variable to true
		//Add code here

	}

	//display shots
	for (int i = 0; i < shots.size(); i++)
	{
		cout << shots[i] << endl;
	}

	return 0;
}
