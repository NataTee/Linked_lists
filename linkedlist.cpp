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
        Node *newNode = new Node;
        fillIt(id, info, newNode);
        if (head != NULL) {
            Node *current = head;
            while ((current->data.id < newNode->data.id) && (current->next != NULL)) {
                current = current->next;
            }
            if (current->data.id == newNode->data.id) {
                added = false;
            }
            else if ((current->next == NULL) && (current->data.id < newNode->data.id)) {
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
    Node *current = head;
    bool deleted;
    while ((current->data.id != id) && (current->next != NULL)) {
        current = current->next;
    }
    if (current->data.id == id) {

        deleted = true;
    }
    else {
        deleted = false;
    }
    return;
}

bool LinkedList::getNode(int id, Data *data) {
    bool found = false;
    Node *current = head;
    while ((current->data.id != id) && (current->next != NULL)) {
        current = current->next;
    }
    if (current->data.id == id) {
        data->id = current->data.id;
        data->data = current->data.data;
        found = true;
    }
    else {
        data->id = -1;
        data->data = "";
    }
    return found;
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
    head->prev = newNode;
    newNode->next = head;
    newNode->prev = NULL;
    head = newNode;
    added = true;
}

void LinkedList::addMiddle(Node* &current, Node* &newNode, bool &added) {
    newNode->next = current;
    newNode->prev = current->prev;
    current->prev->next = newNode;
    current->prev = newNode;
    added = true;
}

void LinkedList::addTail(Node* &current, Node* &newNode, bool &added) {
    newNode->next = NULL;
    newNode->prev = current;
    current->next = newNode;
    added = true;

}

void LinkedList::fillIt(int id, string *info, Node* &newNode) {
    newNode->data.id = id;
    newNode->data.data = *info;
    newNode->next = NULL;
}
