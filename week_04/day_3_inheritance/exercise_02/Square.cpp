/*
 * Square.cpp
 *
 *  Created on: 2016 nov. 9
 *      Author: juli
 */

#include "Square.h"
#include "Shape.h"

Square::Square() {}

Square::~Square() {}

string* Square::getName() {
  return new string("Square");
}
