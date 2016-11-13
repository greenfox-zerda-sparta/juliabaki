/*
 * Parentclass.cpp
 *
 *  Created on: 2016 nov. 10
 *      Author: juli
 */

#include "Parentclass.h"

Parentclass::Parentclass() {
  this->string_1 = "this";
  this->string_2 = "that";
}

Parentclass::~Parentclass() {
}

string Parentclass::getStringVirtual(){
  return string_1;
}

string Parentclass::getstringNonVirtual(){
  return string_2;
}
