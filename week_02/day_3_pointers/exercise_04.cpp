//============================================================================
// Name        : exercise_04.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {
  int numbers[] = {5, 6, 7, 8, 9};
  int* number_pointer;
  // The "number_pointer" should point to the first element of the array called "numbers",
  // than please print its value with it.

  number_pointer = &numbers[0];
  cout << *number_pointer;

  return 0;
}
