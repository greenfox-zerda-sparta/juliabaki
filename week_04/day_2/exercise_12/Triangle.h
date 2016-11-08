/*
 * Triangle.h
 *
 *  Created on: 2016 nov. 8
 *      Author: juli
 */
#include <iostream>
#include <string>

using namespace std;

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

class Triangle {
public:
  Triangle(int input_length, char input_mainchar);
  ~Triangle();
  void drawMainCharacter();
  void drawSpaces();
  void drawChristmasTree();

private:
  int rows;
  int actual_row = 1;
  char maincharacter;
  char space;
};

#endif /* TRIANGLE_H_ */
