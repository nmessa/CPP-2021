// Implementation file for the ProcessList class
//Author: nmessa
//Used by Stack and Queue classes

#include <iostream>  // For cout  and NULL
#include "processList.h"
#include <vector>
using namespace std;

ProcessList::ProcessList()
{ 
	head = NULL; 
}

void ProcessList::appendNode(Process proc)
{
	ListNode *newNode, *nodePtr;

	// Allocate a new node & store num
	newNode = new ListNode;
	newNode->value = proc;
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

void ProcessList::displayList()
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
			cout << nodePtr->value.myPID << "/" << nodePtr->value.myName 
				<< " --> ";
			nodePtr = nodePtr->next;
		}
		else
		{
			cout << nodePtr->value.myPID << "/" << nodePtr->value.myName 
				<< endl;
			nodePtr = nodePtr->next;
		}
	} 
}

Process ProcessList::getNode()
{
	Process temp;
	ListNode *nodePtr;
	nodePtr = head;
	head = head->next;
	temp = nodePtr->value;
	delete nodePtr;
	return temp;
}

void ProcessList::prependNode(Process proc)
{
	ListNode *newNode;

	// Allocate a new node & store num
	newNode = new ListNode;
	newNode->value = proc;
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
	  
