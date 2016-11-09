/*
 * Shape.cpp
 *
 *  Created on: 2016 nov. 9
 *      Author: juli
 */

#include "Shape.h"

Shape::Shape() {
  this->mArea = 0;
}

Shape::~Shape() {}

string* Shape::getName() {
  return new string("Generic Shape");
}

double Shape::getArea(){
  return mArea;
}
