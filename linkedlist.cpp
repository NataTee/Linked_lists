/***************************************************************************
Name: Natalia Ksenz
Coding 05
Purpose: The assignment to create a fully functional doubly linked list class.

File: linkedlist.cpp
***************************************************************************/

#include "linkedlist.h"

LinkedList::LinkedList() {
    head = NULL;
}

LinkedList::~LinkedList() {

}

bool LinkedList::addNode(int id, string *info) {
    bool added = false;
    if(id > 0 && *info != ""){
        Node *current = head;
        Node *newNode = new Node;
        fillIt(id, info, newNode);
        if (head != NULL) {
            while ((current->data.id < newNode->data.id) && (current->next != NULL)) {
                current = current->next;
            }
            if ((current->next == NULL) && (current->data.id < newNode->data.id)) {
                addTail(current, newNode, added);
            }
            else if ((current->data.id > newNode->data.id) && (current->prev == NULL)){
                addHead(head, newNode, added);
            }
            else {
                addMiddle(current, newNode, added);
            }
        }
        else {
            head = newNode;
            added = true;
        }
    }
  return added;
}

bool LinkedList::deleteNode(int id) {
    return;
}

bool LinkedList::getNode(int id, Data *data) {
    return;
}

void LinkedList::printList(bool backward) {

int LinkedList::getCount() {
  Node *current = head;
  int count = 0;
  if (current != NULL) {
      count++;
      while (current = current->next) {
          count++;
      }
  }
  return count;
}

bool LinkedList::clearList() {
    return deleted;
}

bool LinkedList::exists(int id) {
    bool exist;
    return exist;
}

void LinkedList::addHead(Node* &head, Node* &newNode, bool &added) {

}

void LinkedList::addMiddle(Node* &current, Node* &newNode, bool &added) {

}

void LinkedList::addTail(Node* &current, Node* &newNode, bool &added) {

}

void LinkedList::fillIt(int id, string *info, Node* &newNode) {
    newNode->data.id = id;
    newNode->data.data = *info;
    newNode->next = NULL;
}
