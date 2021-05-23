//Lab Exercise 5.24.2021 Problem 3
//Author: 

#include <iostream>

using namespace std;

void evenOddTransform(int[], int, int);
void printArray(int[], int);

//Array is passed as a reference parameter
//As a result you must pass the size of the array
//to the function.  The only information the function has
//is the address of the array.
//You can not return an array from a function
//You can only return a pointer to the array
//I chose to modify the original array to solve this problem
int main()
{
	int a1[] = {3, 4, 9};
	int a2[] = {0, 0, 0};
	int a3[] = {1, 2, 3};

	//Must calculate and pass array size to function
	evenOddTransform(a1, 3, sizeof(a1)/sizeof(a1[0])); 
	evenOddTransform(a2, 10, sizeof(a1)/sizeof(a2[0]));
	evenOddTransform(a3, 1, sizeof(a1)/sizeof(a3[0]));

	printArray(a1, sizeof(a1)/sizeof(a1[0]));
	printArray(a2, sizeof(a1)/sizeof(a2[0]));
	printArray(a3, sizeof(a1)/sizeof(a3[0]));
	return 0;
}

void evenOddTransform(int arr[], int n, int size)
{
	//Add code here


	

}

void printArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		cout << a[i] << " ";
	cout << endl;
}

