//============================================================================
// Name        : exercise_12_float_to_string.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

double string_to_number(string input){
  double result;
  result = atof(input.c_str());
  return result;
}

int main() {
  // Implement a function that takes a string as an argument and converts it to a floating point number

  double number = string_to_number("-2.4");

  cout << number / 2 << endl; // should print -1.2

  return 0;
}
