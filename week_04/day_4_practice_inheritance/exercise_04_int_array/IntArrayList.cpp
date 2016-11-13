/*
 * IntArrayList.cpp
 *
 *  Created on: 2016 nov. 10
 *      Author: juli
 */

#include "IntArrayList.h"
#include "IntList.h"

IntArrayList::IntArrayList() {
  this->elements = new int[getLength()];
}

IntArrayList::~IntArrayList() {
  delete[] elements;
}

bool IntArrayList::isEmpty() {
  return getLength() == 0;
}

void IntArrayList::append(int _a) {
  int* temp = new int[getLength() + 1];
  for (int i = 0; i < getLength(); i++) {
    temp[i] = elements[i];
  }
  temp[getLength()] = _a;
  incrementLength();
  delete[] elements;
  elements = temp;
}

void IntArrayList::printList() {
  if (!isEmpty()) {
    for (int i = 0; i < getLength(); i++) {
      cout << elements[i] << " ";
    }
    cout << endl;
  } else {
    cout << "You have an empty list, can't print anything." << endl;
  }
}

void IntArrayList::insert(int _idx, int _a) {
  if (isEmpty()) {
    cout << "You have an empty list! Please fill it up first!" << endl;
  } else if (_idx >= getLength() || _idx < 0) {
    cout << "Invalid index: " << _idx << endl;
  } else {
    int* temp = new int[getLength() + 1];
    for (int i = 0; i < _idx; i++) {
      temp[i] = elements[i];
    }
    temp[_idx] = _a;
    for (int j = _idx; j < getLength(); j++) {
      temp[j + 1] = elements[j];
    }
    incrementLength();
    delete[] elements;
    elements = temp;
  }
}

int IntArrayList::getFirst() {
  int first_element;
  if (!isEmpty()) {
    first_element = elements[0];
  } else {
    cout << "You have an empty list, don't have first element." << endl;
  }
  return first_element;
}

int IntArrayList::getLast() {
  int last_element;
  if (!isEmpty()) {
    last_element = elements[getLength() - 1];
  } else {
    cout << "You have an empty list, don't have last element." << endl;
  }
  return last_element;
}

int IntArrayList::find(int _a) {
  int _idx = -1;
  for (int i = 0; i < getLength(); i++) {
    if (elements[i] == _a) {
      _idx = i;
    }
  }
  if (_idx == -1) {
    cout << "The number is not in the list." << endl;
  }
  return _idx;
}

int IntArrayList::getElement(int _idx){
  int value;
  if(isEmpty() || _idx < 0 || _idx >= getLength()){
    cout << "Invalid index: " << _idx << endl;
  } else {
    value = elements[_idx];
  }
  return value;
}

void IntArrayList::deleteValue(int _a) {
  int _idx = find(_a);
  deleteIndex(_idx);
}

void IntArrayList::deleteIndex(int _idx) {
  if (!isEmpty() && _idx >= 0 && _idx < getLength()) {
    int* temp = new int[getLength() - 1];
    for (int i = 0; i < _idx; i++) {
      temp[i] = elements[i];
    }
    for (int j = _idx; j < getLength(); j++) {
      temp[_idx] = elements[_idx + 1];
    }
    decrementLength();
    delete[] elements;
    elements = temp;
  } else {
    cout << "Don't have this index in the list." << endl;
  }
}
