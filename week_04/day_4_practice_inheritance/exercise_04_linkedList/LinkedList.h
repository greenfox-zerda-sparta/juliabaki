#include "Node.h"
#include <iostream>

#ifndef INT_LIST_HPP
#define LINKED_LIST_HPP

class LinkedList {
private:
  int mLength;
  Node* head;
protected:
  void setLength(int _length);
public:
  LinkedList();
  virtual ~LinkedList();
  void append(double _a);
  void printList();
  //virtual void insert(int _idx, int _a) = 0;
  //virtual int getFirst() = 0;
  //virtual int getLast() = 0;
  int getLength();
  //virtual bool isEmpty() = 0;
};

#endif
