//Lab Exercise 3.8.2021 Problem 3
//Author: 

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	//Declare variables
	ifstream infile;
	char ch;
	int count = 0;
	//Create array to hold counts of characters
	//Add code here


	infile.open("hamlet.txt");   //open the text file
	
	//Read in all characters               
	while (!infile.eof())        //check for end of file
	{
		//Read in a character
		infile >> ch;

		//If capital letter (ASCII value 65 - 90) add to count
		//and increment character count
		//Add code here



		//If lower case letter (ASCII value 97 - 122) add to count
		//and increment character count
		//Add code here

	}
	infile.close();

	//Output the results
	cout << "Hamlet has " << count << " characters" << endl << endl;
	cout << "Letter\tCount\tPercent" << endl;
	cout << fixed << showpoint << setprecision(2);
	for (char letter = 'A'; letter <= 'Z'; letter++)
		cout << letter << "\t" << charCount[letter - 65] << "\t" <<
		100 * charCount[letter - 65]/(double)count << endl;

	return 0;
}

//Output
//Hamlet has 130136 characters
//
//Letter  Count   Percent
//A       9950    7.65
//B       1830    1.41
//C       2606    2.00
//D       5026    3.86
//E       14960   11.50
//F       2698    2.07
//G       2420    1.86
//H       8731    6.71
//I       8511    6.54
//J       110     0.08
//K       1272    0.98
//L       5847    4.49
//M       4253    3.27
//N       8297    6.38
//O       11218   8.62
//P       2016    1.55
//Q       220     0.17
//R       7777    5.98
//S       8379    6.44
//T       11863   9.12
//U       4343    3.34
//V       1222    0.94
//W       3132    2.41
//X       179     0.14
//Y       3204    2.46
//Z       72      0.06