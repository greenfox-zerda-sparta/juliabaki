//============================================================================
// Name        : new_04.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//============================================================================
// Name        : exercise_04.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int length_caunter(int to, int from, int step){
  int number_of_element;
  if((to - from) % step == 0){
      number_of_element = abs((to - from)/step);
    } else {
      number_of_element = abs((to - from)/step) + 1;
    }
  return number_of_element;
}

int* range(int from, int to, int step){
  int number_of_element = length_caunter(to, from, step);
  int* new_array = new int[number_of_element];
  for(int i = 0; i < number_of_element-1; i++){
    new_array[i] = from + step * i;
    cout << new_array[i] << endl;
  }
  return new_array;
}

/**
 * Create a function called "range" that creates a new array and returns a pointer to it.
 * It should fill the array with numbers based on it's paramters.
 * It should take 3 paramters:
 * int from: the first number in the array
 * int to: it will fill the array till it would reach this number (so this number is not in the array)
 * int step: the step between the numbers
 *
 * Examples:
 * range(0, 10, 2) -> {0, 2, 3, 4, 5, 6, 8}
 * range(1, -8, -3) -> {1, -2, -5}
 *
 * It should delete any dynamically allocated resource before the program exits.
 */

int main() {
  int* new_array = range(-8, 2, 3);
  delete[]new_array;

  return 0;
}
