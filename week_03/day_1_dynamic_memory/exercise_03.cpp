//============================================================================
// Name        : exercise_03.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it should print the average of the numbers.
 * It should delete any dynamically allocated resource before the program exits.
 */
float sum(int count, int* pointer) {
  float sum_of_number;
  for (int j = 0; j < count; j++) {
    sum_of_number += pointer[j];
  }
  return sum_of_number;
}

int main() {
  int count;
  cout << "Please give me a count: " << endl;
  cin >> count;

  int *pointer = nullptr;
  pointer = new int[count];
  for (int i = 0; i < count; i++) {
    cout << "Please give me a number: " << endl;
    int number;
    cin >> number;
    pointer[i] = number;
  }

  double average = sum(count, pointer)/count;
  cout << "Average of the numbers: "<< average << endl;

  delete[] pointer;
  pointer = nullptr;

  return 0;
}
