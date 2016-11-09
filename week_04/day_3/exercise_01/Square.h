/*
 * Square.h
 *
 *  Created on: 2016 nov. 9
 *      Author: juli
 */
#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

#ifndef SQUARE_H_
#define SQUARE_H_

class Square: public Shape{
public:
  Square();
  virtual ~Square();
  string* getName();
};

#endif /* SQUARE_H_ */
