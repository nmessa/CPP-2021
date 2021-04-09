// Specification file for the NumberList class
// Author: nmessa
// Date: 4.15.2007

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
	  void destroyList();
	  void reverseList();
	  void copyList(NumberList&);
};
#endif