//============================================================================
// Name        : exercise_04.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void reverse(int *array, int length){
  for(int i = 0; i < length; i++){
    if(i < (length-i)){
      int temp = array[i];
      array[i] = array[length-i-1];
      array[length-i-1] = temp;
    }
    cout << array[i] << endl;
  }
}

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int length = sizeof(array)/sizeof(*array);

  // Write a function that takes an array and its length than reverses the array
  reverse(array, length);

  return 0;
}
