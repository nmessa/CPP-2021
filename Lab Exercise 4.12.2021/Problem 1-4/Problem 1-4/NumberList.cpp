// Implementation file for the NumberList class
// Author: nmessa
// Date: 4.12.2021

#include <iostream>  // For cout  and NULL
#include "NumberList.h"
#include <vector>
using namespace std;

NumberList::NumberList()
{ 
	head = NULL; 
}

void NumberList::appendNode(double num)
{
	ListNode *newNode, *nodePtr;

	// Allocate a new node & store num
	newNode = new ListNode;
	newNode->value = num;
	newNode->next = NULL;

	// If there are no nodes in the list
	// make newNode the first node
	if (!head)
		head = newNode;
	else	// Otherwise, insert newNode at end
	{
		// Initialize nodePtr to head of list
		nodePtr = head;

		// Find the last node in the list
		while (nodePtr->next)
			nodePtr = nodePtr->next;

		// Insert newNode as the last node
		nodePtr->next = newNode;
	}
}

void NumberList::displayList()
{
	ListNode *nodePtr;
	if (!head)
	{
		cout << "List is empty" << endl;
		return;
	}
	nodePtr = head;
	while (nodePtr)
	{
		if (nodePtr -> next)
		{
			cout << nodePtr->value << " --> ";
			nodePtr = nodePtr->next;
		}
		else
		{
			cout << nodePtr->value << endl;
			nodePtr = nodePtr->next;
		}
	} 
}

void NumberList::insertNode(double num)
{
	ListNode *newNode, *nodePtr, *previousNode = NULL;

	// Allocate a new node & store num
	newNode = new ListNode;
	newNode->value = num;
	
	// If there are no nodes in the list
	// make newNode the first node
	if (!head)
	{
		head = newNode;
		newNode->next = NULL;
	}
	else	// Otherwise, insert newNode
	{
		// Initialize nodePtr to head of list and previousNode to NULL.
		nodePtr = head;
		previousNode = NULL;

		// Skip all nodes whose value member is less
		// than num.
		while (nodePtr != NULL && nodePtr->value < num)
		{	
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		// If the new node is to be the 1st in the list,
		// insert it before all other nodes.
		if (previousNode == NULL)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else	// Otherwise, insert it after the prev. node.
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}

void NumberList::deleteNode(double num)
{
	ListNode *nodePtr, *previousNode;

	// If the list is empty, do nothing.
	if (!head)
		return;
	
	// Determine if the first node is the one.
	if (head->value == num)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		// Initialize nodePtr to head of list
		nodePtr = head;

		// Skip all nodes whose value member is 
		// not equal to num.
		while (nodePtr != NULL && nodePtr->value != num)
		{	
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		// If nodePtr is not at the end of the list, 
		// link the previous node to the node after
		// nodePtr, then delete nodePtr.
		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}

	}
}

NumberList::~NumberList()
{
	ListNode *nodePtr, *nextNode;

	nodePtr = head;
	while (nodePtr != NULL)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}
	  
double NumberList::getNode()
{
	double temp;
	ListNode *nodePtr;
	nodePtr = head;
	head = head->next;
	temp = nodePtr->value;
	delete nodePtr;
	return temp;
}

void NumberList::prependNode(double num)
{
	ListNode *newNode;

	// Allocate a new node & store num
	newNode = new ListNode;
	newNode->value = num;
	newNode->next = NULL;

	// If there are no nodes in the list
	// make newNode the first node
	if (!head)
		head = newNode;
	else	// Otherwise, insert newNode at end
	{
		//point the new node to the location of the first node in list
		newNode -> next = head;

		//make the head pointer point at the new node
		head = newNode;
	}

}
	  
void NumberList::displayListBackwards()
{
	ListNode *nodePtr;
	vector<double> temp;
	int i;

	nodePtr = head;

	while (nodePtr != NULL)
	{
		temp.push_back(nodePtr -> value);
		nodePtr = nodePtr -> next;
	}
	
	/* Alternate algorithm
	while (nodePtr -> next != NULL)
	{
		temp.push_back(nodePtr -> value);
		nodePtr = nodePtr -> next;
	}
	temp.push_back(nodePtr -> value);
	*/

	for (i = temp.size() - 1; i > 0; i--)
		cout << temp[i] << " <-- ";

	cout << temp[i] << endl;
}

//This function will get rid of list while free up memory allocated to nodes in list
void NumberList::destroyList()
{
	//Create a pointer to traverse the list
	//Add code here

	//set the nodePtr to start of list
	//Add code here

	//Keep looping until get to end of list
	while (nodePtr != NULL)
	{
		//Move the head to the next element
		//Add code here

		//delete the node that the nodePtr is pointing at
		//Add code here

		//set the nodePtr to start of list
		//Add code here
	}
	//mark list as empty by setting head to NULL
	//Add code here
}

//This function will reverse the list
void NumberList::reverseList()
{
	//Create a ListNode pointer to move through the list
	//Add code here

	//Create a vector to hold contents of original list
	//Add code here

	//Set the nodePtr to the beginning of the list
	//Add code here

	//Copy the list by going through the list node by node and putting it's
	//value in the temp list
	while (nodePtr != NULL)
	{
		//Put list node value in the vector
		//Add code here

		//Move nodePtr to next node
		//Add code here

	}

	//Destroy the original list
	//Add code here

	//Rebuild the list in reverse order
	//by traversing the vector backwards
	for (int i = temp.size() - 1; i >= 0; i--)
		//Add a node with the value from vector to end of list
		//Add code here
}

//This function will make a copy of a list
//Must use a reference parameter
void NumberList::copyList(NumberList &other)
{
	//Create a pointer to point at nodes in the list
	//Add code here

	//Set nodePtr to start of list
	//Add code here

	//Copy node by node from original list to other(copy) list
	while (nodePtr != NULL)
	{
		//Copy list node value to other list
		//Add code here

		//Move nodePtr to next node in list
		//Add code here
	}
}