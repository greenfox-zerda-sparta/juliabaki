//============================================================================
// Name        : exercise_9.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	long long i = 1357988018575474;
	// tell if it has 11 as a divisor

	if (i % 11 == 0){
		cout << "The number has 11 as a divisor.";
	}else {
		cout << "The number not has 11 as a divisor.";
	}
	return 0;
}
