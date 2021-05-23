//Lab Exercise 5.25.2021 Problem 1
//Author: 

#include <iostream>
#include <vector>
using namespace std;

vector<int> miniPeaks(vector<int>);
void printVector(vector<int>);

int main()
{
	//Create an empty vector
	vector<int> v1;
	//Declare array
	int a1[] = {4, 5, 2, 1, 4, 9, 7, 2};
	//Copy all array elements into vector
	v1.assign(begin(a1), end(a1));


	vector<int> v2;
	int a2[] = {1, 2, 1, 1, 3, 2, 5, 4, 4};
	v2.assign(begin(a2), end(a2));
	vector<int> v3;
	int a3[] = {1, 2, 3, 4, 5, 6};
	v3.assign(begin(a3), end(a3));

	//Print the thee vectors
	printVector(miniPeaks(v1));
	printVector(miniPeaks(v2));
	printVector(miniPeaks(v3));

	return 0;
}

vector<int> miniPeaks(vector<int> v)
{
	//Add code here


}

void printVector(vector<int> v)
{
	cout << "[";
	for (int i = 0; i < v.size(); i++)
		cout <<  v[i] << " ";
	cout << "]" << endl;
}
