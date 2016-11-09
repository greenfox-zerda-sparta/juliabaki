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
    Square(int input_a, int input_b);
    ~Square();
    string* getName();
    void setSquare(int input_a, int input_b);
    int getSquare();
    double getArea();

  private:
    int a;
    int b;
};

#endif /* SQUARE_H_ */
