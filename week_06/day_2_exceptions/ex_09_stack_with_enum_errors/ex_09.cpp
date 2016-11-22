#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

// Duplicate the Stack class from the previous exercies.
// Rewrite it so, that the push and pop methods don't throw integers.
// Define an enum for the two types of exceptions.
// Adapt the interpretException method to except an argument from that enum type.
// Adapt the main function so that the try and catch blocks except an exception of that enum type.

int main() {
  Stack stack;
  try {
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.print_array();
    stack.push(6);
  } catch (Errors error) {
    cout << "Error: " << stack.interpretException(error) << endl;
  }

  Stack stack_1;
  try {
    cout << stack_1.pop();
  } catch (Errors exp) {
    cout << "Error: " << stack_1.interpretException(exp) << endl;
  }

  return 0;
}

