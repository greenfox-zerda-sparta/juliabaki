//============================================================================
// Name        : exercise_03.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void swap(int *number1, int *number2){
  int* temp = number1;
  number1 = number2;
  number2 = temp;
  cout << *number1 << " " << *number2;
}

int main() {
  int first = 12;
  int second = 54;

  int* firstPonter = &first;
  int* secondPointer = &second;

  // Write a function that takes two int pointers and swaps the values where the pointers point
 swap(firstPonter, secondPointer);

  return 0;
}
