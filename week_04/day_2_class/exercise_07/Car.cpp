/*
 * Car.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: juli
 */

#include "Car.h"

Car::Car(string type, int km){
  this->type = type;
  this->km = km;
}

double Car::run(int number){
  return this->km *= number;
}
