//============================================================================
// Name        : exercise_01.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {
  int* pointer = NULL;

  // Please allocate a 5 long array and fill it with numbers from 0 to 4, then print the whole array
  // Please delete the array before the program exits

  pointer = new int[5];
  for(int i = 0; i < 5; i++){
    pointer[i] = i;
    cout << pointer[i] << " ";
  }

  delete[] pointer;
  pointer = nullptr;

  return 0;
}
