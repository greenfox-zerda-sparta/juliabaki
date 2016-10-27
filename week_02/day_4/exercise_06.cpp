//============================================================================
// Name        : exercise_06.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int evenCounter(int* array, int length){
  int secondEven;
  for(int i = 0; i < length-1; i++){
    if(array[i] % 2 == 0 && array[i+1] % 2 == 0){
      secondEven++;
    }
  }
  return secondEven;
}

int main() {
  int numbers[] = {5, 2, 6, 3, 4, 8, 5, 2, 2, 2};
  int length = sizeof(numbers)/sizeof(*numbers);

  // Write a function that counts how many times is an even number is followed by
  // another even number in an array
  cout << evenCounter(numbers, length);

  return 0;
}
