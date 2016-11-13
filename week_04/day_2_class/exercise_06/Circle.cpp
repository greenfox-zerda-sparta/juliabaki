/*
 * Circle.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: juli
 */

#include "Circle.h"

Circle::Circle(int input) {
  this->radius = input;
}

double Circle::get_circumference(){
  return 2 * radius * pi;
}

double Circle::get_area(){
  return radius * radius * pi;
}

Circle::~Circle() {

}

