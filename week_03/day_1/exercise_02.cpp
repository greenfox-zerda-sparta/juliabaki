//============================================================================
// Name        : exercise_02.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {
  int* pointer = new int[5];
  int* pointer_2 = new int[10];

  // Please allocate a 10 long array and fill it with numbers from 0 to 4, then print the whole array
  // Please delete the array before the program exits

  for(int i = 0; i < 5; i++){
    pointer_2[i] = i;
  }

  for(int j = 0; j < 10; j++){
    cout << pointer_2[j] << " ";
  }

  delete[] pointer;
  delete[] pointer_2;
  pointer = nullptr;
  pointer_2 = nullptr;

  return 0;
}
