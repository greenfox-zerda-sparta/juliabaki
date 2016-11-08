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
  Triangle(int input_length);
  ~Triangle();
  void drawDiamond();

private:
  int rows;
};

#endif /* TRIANGLE_H_ */
