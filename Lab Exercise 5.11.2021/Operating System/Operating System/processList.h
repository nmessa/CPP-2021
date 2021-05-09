// Specification file for the ProcessList class
//Author: nmessa

#ifndef PROCESSLIST_H
#define PROCESSLIST_H
#include "process.h"

class ProcessList
{
   private:
      // Declare a structure for the list
      struct ListNode
      {
         Process value;
         struct ListNode *next;
      }; 
      ListNode *head;   // List head pointer

   public:
      ProcessList();      // Constructor
      void appendNode(Process);
      void displayList();
      Process getNode();
	  void prependNode(Process);
};
#endif