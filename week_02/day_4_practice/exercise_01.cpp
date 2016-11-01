//============================================================================
// Name        : exercise_01.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

void square(int *array, int length){
  int squareNumber;
  for(int i = 0; i < length; i++){
    squareNumber = array[i] * array[i];
    cout << squareNumber << " ";
  }
}

int main() {
  // Write a function that takes an array and squares all the elements in the array
  int array[]= {1, 2, 3, 4, 5, 6, 7};
  int length = sizeof(array)/sizeof(*array);

  square(array, length);

  return 0;
}
