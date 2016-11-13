/*
 * Triangle.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: juli
 */
#include "Triangle.h"

Triangle::Triangle(int input_length) {
  this->length = input_length;
}

Triangle::~Triangle() {}

void Triangle::print_star(){
  string stars = " ";
  for(int j = 0; j < length; j++){
    for(int i = 0; i < 1; i++){
      stars += "*";
    }
    cout << stars << endl;
  }
}
