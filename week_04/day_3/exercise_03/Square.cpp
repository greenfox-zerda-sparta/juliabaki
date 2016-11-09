/*
 * Square.cpp
 *
 *  Created on: 2016 nov. 9
 *      Author: juli
 */

#include "Square.h"
#include "Shape.h"

Square::Square(int input_a, int input_b) {
  this->a = input_a;
  this->b = input_b;
}

Square::~Square() {}

string* Square::getName() {
  return new string("Square");
}

void Square::setSquare(int input_a, int input_b){
  this->a = input_a;
  this->b = input_b;
}

int Square::getSquare(){
  return a, b;
}

double Square::getArea(){
  mArea = a * b;
  return mArea;
}
