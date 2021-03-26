//Lab Exercise 3/31/2021 Problem 2
//Author: 
//Test file named "test.txt" and contains:
//Jack be nimble
//Jack be quick
//Jack jumped over the candlestick
//This is a test
//Jack and Jill
//Ran up the hill
//Jack fell down
//and broke his crown

//Search string = "Jack"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//Declare variables
	ifstream infile;
	string filename, line, word;
	int count = 0;

	//Get filename from user
	cout << "Enter filename: ";
	cin >> filename;

	//Get word to search for from user
	cout << "Enter word to search for: ";
	cin >> word;

	//Open the file
	//Add code here	

	//Keep looping until end of file
	while (!infile.eof())
	{
		//Read a line
		//Add code here	

		//If word found in line, increment count and print line
		//Hint: line.find(word) will return the index of where the word was found
		//in line.  If word is not found in line, it will return -1
		//Add code here	


	}

	//Close the file
	//Add code here	

	//Output search results
	cout << word << " was found on " << count << " lines\n"; 
	return 0;
}

//Output
//Enter filename: test.txt
//Enter word to search for: Jack
//Jack be nimble
//Jack be quick
//Jack jumped over the candlestick
//Jack and Jill
//Jack fell down
//Jack was found on 5 lines