/*
 * Triangle.h
 *
 *  Created on: 2016 nov. 9
 *      Author: juli
 */
#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

class Triangle: public Shape{
public:
  Triangle();
  virtual ~Triangle();
  string* getName();
};

#endif /* TRIANGLE_H_ */
