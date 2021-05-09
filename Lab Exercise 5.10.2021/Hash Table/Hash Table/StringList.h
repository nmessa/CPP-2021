// Specification file for the StringList class
#ifndef STRINGLIST_H
#define STRINGLIST_H
#include <string>
using namespace std;

class StringList
{
   private:
      // Declare a structure for the list
      struct ListNode
      {
         string value;
         struct ListNode *next;
      }; 
      ListNode *head;   // List head pointer

   public:
      StringList();      // Constructor
      ~StringList();    // Destructor
      void insertNode(string);
      void deleteNode(string);
      void displayList();
};
#endif