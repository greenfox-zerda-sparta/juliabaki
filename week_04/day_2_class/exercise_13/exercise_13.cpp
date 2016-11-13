//============================================================================
// Name        : exercise_13.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Triangle.h"

using namespace std;

int main() {
    // Create a triangle class that takes a length parameter and prints a triangle like this:
    //       *
    //      ***
    //     *****
    //    *******
    //   *********
    //  ***********
    //
    // It should take a number as parameter that describes how many lines the triangle has
  Triangle triangle_1(6);
  triangle_1.drawDiamond();
  return 0;
}
