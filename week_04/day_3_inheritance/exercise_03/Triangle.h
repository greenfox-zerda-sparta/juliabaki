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
    void setA(int input_a);
    void setHeight(int height);
    int getA();
    int getHeight();
    void calculateArea();

  private:
    int a;
    int height;
};

#endif /* TRIANGLE_H_ */
