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

void LinkedList::insert(unsigned int _idx, double _a) {
  Node* new_node = new Node(_a);
  if(_idx == 0){
    new_node->mNext = head;
    head->mPrev = new_node;
    head = new_node;
  } else {
      Node* current = head;
      unsigned int current_idx = 1;
      while (current_idx != _idx && current->mNext != nullptr) {
        current = current->mNext;
        current_idx++;
      }
      new_node->mPrev = current;
      new_node->mNext = current->mNext;
      if (current->mNext != nullptr) {
        current->mNext->mPrev = new_node;
      }
      current->mNext = new_node;
  }
}
