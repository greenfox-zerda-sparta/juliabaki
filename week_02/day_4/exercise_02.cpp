//============================================================================
// Name        : exercise_02.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void fillUp(int *array, int length){
  for(int i = 0; i < length; i++){
    array[i] = i;
    cout << array[i] << " ";
  }
}

int main() {
  int array[10];

  // write a function that takes an array and a length and it fills the array
  // with numbers from zero till the length

  fillUp(array, 10);

  return 0;
}
