// Create a constatn using a prepocesor directive.
// Print it out to the console.
// Undefine it. And then redefine it with a new value.

#include <iostream>

#define MY_CONST 3


int main(){
  std::cout << MY_CONST << std::endl;
  #undef MY_CONST
  #define MY_CONST 5
  std::cout << MY_CONST << std::endl;
  return 0;
}
