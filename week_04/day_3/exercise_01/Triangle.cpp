/*
 * Triangle.cpp
 *
 *  Created on: 2016 nov. 9
 *      Author: juli
 */

#include "Triangle.h"
#include "Shape.h"

Triangle::Triangle() {}

Triangle::~Triangle() {}

string* Triangle::getName() {
  return new string("Triangle");
}
