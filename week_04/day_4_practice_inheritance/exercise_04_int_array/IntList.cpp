/*
 * IntList.cpp
 *
 *  Created on: 2016 nov. 10
 *      Author: juli
 */

#include "IntList.h"

IntList::IntList() {
  this->mLength = 0;
}

IntList::~IntList() {
}

int IntList::getLength() {
  return this->mLength;
}

void IntList::incrementLength() {
  this->mLength++;
}

void IntList::decrementLength() {
  this->mLength--;
}
