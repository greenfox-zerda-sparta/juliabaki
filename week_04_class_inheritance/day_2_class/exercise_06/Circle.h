/*
 * Circle.h
 *
 *  Created on: 2016 nov. 8
 *      Author: juli
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle {
public:
  int radius;
  const double pi = 3.14;
  Circle(int iput);
  double get_circumference();
  double get_area();
  virtual ~Circle();
};

#endif /* CIRCLE_H_ */
