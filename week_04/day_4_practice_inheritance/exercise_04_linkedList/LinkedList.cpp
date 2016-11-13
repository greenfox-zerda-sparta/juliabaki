/*
 * InList.cpp
 *
 *  Created on: 2016 nov. 13
 *      Author: juli
 */

#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {
  this->mLength = 0;
  this->head = nullptr;
}

LinkedList::~LinkedList() {
}

void LinkedList::setLength(int _length) {
  mLength = _length;
}

int LinkedList::getLength() {
  return mLength;
}

void LinkedList::append(double _a) {
  Node* new_node = new Node(_a);
  if (head == nullptr) {
    head = new_node;
  } else {
    Node* current = head;
    while (current->mNext != nullptr) {
      current = current->mNext;
    }
    current->mNext = new_node;
    new_node->mPrev = current;
  }

}

void LinkedList::printList() {
  Node* current = head;
  while (current != nullptr) {
    std::cout << current->mValue << " ";
    current = current->mNext;
  }
  std::cout << std::endl;
}
