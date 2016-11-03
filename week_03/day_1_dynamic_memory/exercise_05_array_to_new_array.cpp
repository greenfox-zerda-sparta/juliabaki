//============================================================================
// Name        : exercise_05.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/**
 * Create a function called "resize" that takes a pointer to an int array, it's size and it's new size,
 * then it should return a new pointer that points to the new resized array.
 * It should copy all the elements to the new array, if the array is bigger it should fill all the new slots with zeros.
 * It should delete the old array.
 */
int* resize(int* array, int length, int new_length) {
  int* new_array = new int[new_length];
  for (int i = 0; i < new_length; i++) {
    if (new_length - (length + i) > 0) {
      new_array[i] = array[i];
    } else {
      new_array[i] = 0;
    }
  }
  array = nullptr;
  return new_array;
}

int main() {
  int array[5] = { 1, 2, 3, 4, 5 };
  int* new_array = resize(array, 5, 10);
  for (int i = 0; i < 10; i++) {
    cout << new_array[i] << endl;
  }
  delete[] new_array;
  new_array = nullptr;

  return 0;
}
