// Create a function like macro, that get's one parameter.
// This macro should print out that parameter using cout.
// Illustrate that it works in Your main function.

#include <iostream>

#define print(a) {std::cout << #a << " = " << a;}

int main(){
  int my_int = 8;
  print(my_int);
  return 0;
}
