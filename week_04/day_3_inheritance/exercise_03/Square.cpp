/*
 * Square.cpp
 *
 *  Created on: 2016 nov. 9
 *      Author: juli
 */

#include "Square.h"
#include "Shape.h"

Square::Square(int a, int b) {
  this->a = a;
  this->b = b;
  calculateArea();
}

Square::~Square() {}

string* Square::getName() {
  return new string("Square");
}

void Square::setA(int input_a){
  this->a = input_a;
  this->calculateArea();
}

void Square::setB(int input_b){
  this->b = input_b;
  this->calculateArea();
}

int Square::getSquare_a(){
  return a;
}

int Square::getSquare_b(){
  return b;
}

void Square::calculateArea(){
  mArea = a * b;
}

