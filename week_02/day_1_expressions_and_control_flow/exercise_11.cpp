//============================================================================
// Name        : exercise_11.cpp
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
	int k = 1521;
	// tell if k is dividable by 3 or 5
	if (k%3 == 0 || k%5==0){
		cout << "k is dividable by 3 or 5";
	} else {
		cout << "k is not dividable by 3 or 5";
	}
	return 0;
}
