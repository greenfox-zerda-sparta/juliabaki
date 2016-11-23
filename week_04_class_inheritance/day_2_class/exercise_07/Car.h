/*
 * Car.h
 *
 *  Created on: 2016 nov. 8
 *      Author: juli
 */
#include <iostream>
#include <string>

using namespace std;

#ifndef CAR_H_
#define CAR_H_

class Car {
private:
  string type;
  int km;
public:
  Car(string type, int km);
  double run(int number);
};

#endif /* CAR_H_ */
