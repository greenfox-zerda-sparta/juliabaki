//============================================================================
// Name        : exercise_06.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Circle.h"

using namespace std;

int main() {
    // Create a `Circle` class that takes it's radius as constructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

  Circle circle_1{5};

  cout << circle_1.get_area() << endl;
  cout << circle_1.get_circumference() << endl;

  return 0;
}
