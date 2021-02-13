//Lab Exercise 2/17/2021 Problem 2
//Author: 

#include <iostream>
#include <string>
using namespace std;

//BankAccount structure definition
struct BankAccount
{
	//Add code here

};

//Function prototype
void printAccount(BankAccount);

int main()
{
	//Create 3 BankAccount structure variables
	BankAccount one = {"Mary Jones", "123456", 'S', 1.5};
	BankAccount two = {"Frank Smith", "654321", 'C', 0.5};
	BankAccount three = {"Jack Florey", "435654", 'M', 2.5};

	//Print the 3 BankAccount structures
	printAccount(one);
	printAccount(two);
	printAccount(three);
	return 0;
}

//This function will print the contents of a BankAccount that is passed to it
void printAccount(BankAccount ba)
{
	//Add code here


}

//Output
//Name: Mary Jones
//Account number: 123456
//Account category: S
//APR: 1.5
//
//Name: Frank Smith
//Account number: 654321
//Account category: C
//APR: 0.5
//
//Name: Jack Florey
//Account number: 435654
//Account category: M
//APR: 2.5