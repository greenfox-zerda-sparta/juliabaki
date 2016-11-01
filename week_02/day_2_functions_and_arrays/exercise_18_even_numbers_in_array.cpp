//============================================================================
// Name        : exercise_18.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int evennumbers(int array[], int length){
	int evennumber;
	for (int i = 0; i < length; i++){
		if (array[i]%2 == 0) {
			evennumber++;
		}
	}
	return evennumber;
}

int main(){
  int numbers[] = {4, 5, 6, 2, 3, 8, 6, 5};
  // create a function that takes an array and it's length as an argument
  // and returns a number that states how many even numbers are in the array

  int lenght = sizeof(numbers)/sizeof(int);
  cout << evennumbers(numbers, lenght);

	return 0;
}
