// Implementation file for the NumberList class
#include <iostream>  // For cout  and NULL
#include <string>
#include "StringList.h"
using namespace std;

StringList::StringList()
{ 
	head = NULL; 
}

void StringList::displayList()
{
	//Add code here


}

void StringList::insertNode(string name)
{
	ListNode *newNode, *nodePtr, *previousNode = NULL;

	// Allocate a new node & store num
	//Add code here

	
	// If there are no nodes in the list
	// make newNode the first node
	if (!head)
	{
		//Add code here

	}
	else	// Otherwise, insert newNode
	{
		// Initialize nodePtr to head of list and previousNode to NULL.
		//Add code here


		// Skip all nodes whose value member is less
		// than num.
		while (nodePtr != NULL && nodePtr->value < name)
		{	
			//Add code here

		}

		// If the new node is to be the 1st in the list,
		// insert it before all other nodes.
		if (previousNode == NULL)
		{
			//Add code here

		}
		else	// Otherwise, insert it after the prev. node.
		{
			//Add code here

		}
	}
}

void StringList::deleteNode(string name)
{
	ListNode *nodePtr, *previousNode;

	// If the list is empty, do nothing.
	if (!head)
		return;
	
	// Determine if the first node is the one.
	if (head->value == name)
	{
		//Add code here

	}
	else
	{
		// Initialize nodePtr to head of list
		//Add code here


		// Skip all nodes whose value member is 
		// not equal to num.
		while (nodePtr != NULL && nodePtr->value != name)
		{	
			//Add code here

		}

		// If nodePtr is not at the end of the list, 
		// link the previous node to the node after
		// nodePtr, then delete nodePtr.
		if (nodePtr)
		{
			//Add code here

		}
		else
		{
			//Add code here

		}
	}
}

StringList::~StringList()
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

