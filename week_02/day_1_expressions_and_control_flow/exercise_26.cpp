//============================================================================
// Name        : exercise_26.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	// Write a program that prints the numbers from 1 to 100.
	// But for multiples of three print "Fizz" instead of the number
	// and for the multiples of five print "Buzz".
	// For numbers which are multiples of both three and five print "FizzBuzz".
	int till = 100;
	for (int i = 1; i <= till; i++) {
		if (i % 3 == 0) {
			cout << "Fizz" << endl;
		} else if (i % 5 == 0) {
			cout << "Buzz" << endl;
		} else if (i % 5 == 0 && i % 3 == 0) {
			cout << "FizzBuzz" << endl;
		} else {
			cout << i << endl;
		}
	}
	return 0;
}
