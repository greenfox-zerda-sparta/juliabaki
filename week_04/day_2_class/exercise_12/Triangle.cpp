/*
 * Triangle.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: juli
 */

#include "Triangle.h"

Triangle::Triangle(int input_length, char input_mainchar) {
  this->rows = input_length;
  this->maincharacter = input_mainchar;
  this->space = ' ';
}

Triangle::~Triangle() {}

void Triangle::drawMainCharacter(){
  for (int i = 1; i <= actual_row * 2 - 1; ++i) {
    cout << maincharacter;
  }
}

void Triangle::drawSpaces(){
  for (int i = rows - actual_row; i > 0; --i) {
    cout << space;
  }
}

void Triangle::drawChristmasTree(){
  for (actual_row = 1; actual_row <= rows; ++actual_row) {
    Triangle::drawSpaces();
    Triangle::drawMainCharacter();
    cout << endl;
    }
}
