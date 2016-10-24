//============================================================================
// Name        : exercise_10.cpp
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
	int j1 = 10;
	int j2 = 3;
	// tell if j1 is higher than j2 squared and smaller than j2 cubed
	if((j1 > pow(j2,2)) && (j1 < pow(j2,3))){
		cout << "True";
	} else {
		cout << "False";
	}
	return 0;
}
