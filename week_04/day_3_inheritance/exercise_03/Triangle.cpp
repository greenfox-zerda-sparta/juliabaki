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
  calculateArea();
}

Triangle::~Triangle() {}

string* Triangle::getName() {
  return new string("Triangle");
}

void Triangle::setA(int input_a){
  this->a = input_a;
  this->calculateArea();
}

void Triangle::setHeight(int height){
  this->height = height;
  this->calculateArea();
}

int Triangle::getA(){
  return a;
}

int Triangle::getHeight(){
  return height;
}

void Triangle::calculateArea(){
  mArea = (a * height) / 2;
}
