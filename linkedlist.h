/***************************************************************************
Name: Natalia Ksenz
Coding 05
Purpose: The assignment to create a fully functional doubly linked list class.

File: linkedlist.h
***************************************************************************/


 #ifndef LINKEDLIST_H
 #define LINKEDLIST_H

 #include <iostream>     /* cout, endl */
 #include "string"
 #include "data.h"

 using std::cout;
 using std::endl;
 using std::string;

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

     void fillIt(int, string*, Node*&);
     void addHead(Node*&, Node*&, bool&);
     void addMiddle(Node*&, Node*&, bool&);
     void addTail(Node*&, Node*&, bool&);
 };
 #endif /* LINKEDLIST_H */
