/*
 * Triangle.cpp
 *
 *  Created on: 2016 nov. 9
 *      Author: juli
 */

#include "Triangle.h"
#include "Shape.h"

Triangle::Triangle(int input_a, int input_height) {
  this->a = input_a;
  this->height = input_height;
}

Triangle::~Triangle() {}

string* Triangle::getName() {
  return new string("Triangle");
}

void Triangle::setTriangle(int input_a, int input_height){
  this->a = input_a;
  this->height = input_height;
}

int Triangle::getTriangle(){
  return a, height;
}

double Triangle::getArea(){
  mArea = (a * height) / 2;
  return mArea;
}
