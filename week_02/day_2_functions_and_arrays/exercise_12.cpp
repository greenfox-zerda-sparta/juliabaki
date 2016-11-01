//============================================================================
// Name        : exercise_12.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int allsum = 0;

int sum(int array[], int length){
	for (int i = 0; i < length; i++) {
	allsum = allsum + array[i];
	}
  return allsum;
}


int main() {
	int numbers[] = { 4, 5, 6, 7, 8, 9, 10 };
	int length = sizeof(numbers)/sizeof(int);

	// write your own sum function
	// it should take an array and it's length
	cout << sum (numbers, length);
	return 0;
}
