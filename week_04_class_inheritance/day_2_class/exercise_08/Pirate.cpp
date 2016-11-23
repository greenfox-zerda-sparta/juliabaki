/*
 * Pirate.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: juli
 */

#include "Pirate.h"

Pirate::Pirate(){}

int Pirate::drink_rum(){
  times++;
  return times;
}

string Pirate :: hows_goin_mate(){
  string result;
  if(times >= 5){
    result = "Arrrr!";
  } else {
    result = "Nothin'";
  }
  return result;
}
