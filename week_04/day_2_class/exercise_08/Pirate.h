/*
 * Pirate.h
 *
 *  Created on: 2016 nov. 8
 *      Author: juli
 */

#include <iostream>
#include <string>

using namespace std;

#ifndef PIRATE_H_
#define PIRATE_H_

class Pirate {
public:
  Pirate();
  int drink_rum();
  string hows_goin_mate();
private:
  int times = 0;
};

#endif /* PIRATE_H_ */
