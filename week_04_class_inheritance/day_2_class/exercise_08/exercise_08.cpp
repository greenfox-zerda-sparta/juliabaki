//============================================================================
// Name        : exercise_08.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Pirate.h"

using namespace std;

int main() {
    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

  Pirate pirate_1;
  pirate_1.drink_rum();
  pirate_1.drink_rum();

  cout << pirate_1.drink_rum() << endl;
  cout << pirate_1.hows_goin_mate();
  return 0;
}
