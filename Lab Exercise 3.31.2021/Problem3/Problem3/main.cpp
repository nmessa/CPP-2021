//Lab Exercise 3/31/2021 Problem 3
//Author: 
//This program uses C++ Style strings

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

string pigLatin(string);
string toLowerCase(string);

int main()
{
	//Declare variables
    string str = "";
	string line;
	int count = 0;
	ifstream infile;  //for reading from a file
	ofstream outfile;	//for writing to a file

	//Open the file "hamlet.txt" for reading
	//Add code here	

	//Keep looping until you get to end of file
	while (!infile.eof())
	{
		//read line from file
		//Add code here	

		//add line to current string
		//Add code here		

		//put space between lines of text
		//This will be needed for StringStream to work correctly
		//Add code here					
	}

	//Close the file
	//Add code here	

	//convert string to all lower case
	//Add code here		

	//put string in string stream
	istringstream inputString(str);  

	//Open file "pigHam.txt" for writing
	//Add code here	

	//Loop until string stream is empty
	//I am using StringStream to process each word
	do
	{
		//Declare local variable
		string sub;

		//get word from string steam
		inputString >> sub;				

		//write pig latin word to file
		outfile << pigLatin(sub);

		//place space between each word
		outfile << " ";	

		//Increment counter
		count++;

		//Ten words per line
		if (count%10 == 0)
			outfile << '\n';
	} while (inputString);

	//Close the file
	//Add code here

	cout << endl;
	return 0;
}


//This function will take a string and convert it to lower case
string toLowerCase(string str)
{
	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);
	return str;
}

//This function will take a word and convert it to pig latin
string pigLatin(string str)
{
	string pl = "";
	if (str == "")
		return "";
	string vowels = "aeiou";

	//if the first character is found in the string vowels, it will 
	//return an integer from 0 to 4
	if (vowels.find(str[0]) < 5)
	{
		//started with a vowel
		pl = str + "hay";		//add 'hay' to end of string
	}
	else
	{
		//started with a consonant
		for (int i = 1; i < str.length(); i++) //build string [1:]
			pl += str[i];
		pl += str[0];	//put first character at end of string
		pl += "ay";		//add 'ay' to end of string
	}
	return pl;
}

//If you want to see the output, you will need to open pigHam.txt in Notepad++
//Do you see the problem with punctuation?  Any ideas on how to fix that?
//Maybe write a "cleanup" function to strip off punctuations?