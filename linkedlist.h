/***************************************************************************
Name: Natalia Ksenz
Coding 05
Purpose: The assignment to create a fully functional doubly linked list class.

File: stack.cpp
***************************************************************************/


 #ifndef LINKEDLIST_H
 #define LINKEDLIST_H

 #include <iostream>     /* cout, endl */

 #include "data.h"

 using std::cout;
 using std::endl;

 class LinkedList {

 public:

     LinkedList();
     ~LinkedList();

     bool addNode(int, string*);
     bool deleteNode(int);
     bool getNode(int, Data*);
     void printList(bool = false);
     int getCount();
     bool clearList();
     bool exists(int);

 private:

     Node *head;   // a pointer to the first node or NULL if the list is empty.
 };
 #endif /* LINKEDLIST_H */
