//============================================================================
// Name        : exercise_02.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <iostream>
#include <math.h>

using namespace std;

struct RectangularCuboid {
  double a;
  double b;
  double c;
};

double get_surface(RectangularCuboid& rect){
  double surface;
  surface = 2 * (rect.a * rect.b + rect.a * rect.c + rect.c * rect.b );
  return surface;
}

double get_volume(RectangularCuboid& rect){
  return rect.a * rect.b * rect.c;
}

// Write a function called "get_surface" that takes a RectangularCuboid
// and returns it's surface

// Write a function called "get_volume" that takes a RectangularCuboid
// and returns it's volume

int main() {
  RectangularCuboid rect = {4, 6, 3};
  cout << get_surface(rect) << endl;
  cout << get_volume(rect) << endl;
  return 0;
}
