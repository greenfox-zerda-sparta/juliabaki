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
    Triangle(int input_a, int input_height);
    ~Triangle();
    string* getName();
    void setTriangle(int input_a, int input_height);
    int getTriangle();
    double getArea();

  private:
    int a;
    int height;
};

#endif /* TRIANGLE_H_ */
