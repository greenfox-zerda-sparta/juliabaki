//============================================================================
// Name        : exercise_10.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main() {
    // Create a `Stack` class that stores elements
    // It should have a `size` method that returns number of elements it has
    // It should have a `push` method that adds an element to the stack
    // It should have a `pop` method that returns the last element form the stack and also deletes it from it
  int array[] = {1, 2, 3};
  Stack stack_1(3, array);

  stack_1.push(4);
  stack_1.print_stack();
  cout << endl;
  cout << stack_1.pop() << endl;
  stack_1.print_stack();

  return 0;
}
