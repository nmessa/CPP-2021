// Specification file for the NumberList class
// Author: nmessa
// Date: 4.12.2021

#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList
{
   private:
      // Declare a structure for the list
      struct ListNode
      {
         double value;
         struct ListNode *next;
      }; 
      ListNode *head;   // List head pointer

   public:
      NumberList();      // Constructor
      ~NumberList();    // Destructor
      void appendNode(double);
      void insertNode(double);
      void deleteNode(double);
      void displayList();
      double getNode();
	  void prependNode(double);
	  void displayListBackwards();
	  //Add these functions
	  //Add code here

};
#endif