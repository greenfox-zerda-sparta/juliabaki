//============================================================================
// Name        : exercise_14.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int min(int array[], int length){
	int minelem = array[0];
	for(int i = 0; i < length; i++){
		if (minelem > array[i]){
			minelem = array[i];
		}
	}
	return minelem;
}

int main() {
  int numbers[] = {7, 5, 8, -1, 2};
  // Write a function that takes ana array and its length returns the minimal element
  // in the array (your own min function)
  int length = sizeof(numbers)/sizeof(int);
  cout << min(numbers, length);

  return 0;
}
