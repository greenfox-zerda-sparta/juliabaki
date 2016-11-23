/*
 * ChildClass.cpp
 *
 *  Created on: 2016 nov. 10
 *      Author: juli
 */

#include "ChildClass.h"
#include "Parentclass.h"

ChildClass::ChildClass() {
  this->ChildString_1 = "something else";
  this->ChildString_2 = "something completely else";
}

ChildClass::~ChildClass() {
}

string ChildClass::getStringVirtual(){
  return ChildString_1;
}

string ChildClass::getParentString_2(){
  return this->Parentclass::string_2 = ChildString_2;
}
