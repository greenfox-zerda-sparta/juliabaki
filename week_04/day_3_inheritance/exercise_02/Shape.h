/*
 * Shape.h
 *
 *  Created on: 2016 nov. 9
 *      Author: juli
 */
#include <iostream>
#include <string>

using namespace std;

#ifndef SHAPE_H_
#define SHAPE_H_

class Shape {
public:
  Shape();
  virtual ~Shape();
  virtual string* getName();
};

#endif /* SHAPE_H_ */
