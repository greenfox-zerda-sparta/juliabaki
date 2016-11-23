/*
 * Node.cpp
 *
 *  Created on: 2016 nov. 13
 *      Author: juli
 */

#include "Node.h"

Node::Node(double value) {
  this->mValue = value;
  this->mNext = nullptr;
  this->mPrev = nullptr;
}

Node::~Node() {
}

