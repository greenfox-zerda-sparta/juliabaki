//============================================================================
// Name        : exercise_17.cpp
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
	int w = 24;
	int out = 0;
	// if w is even increment out by one
	if(w % 2 == 0){
		out++;
	}
	cout << out;
	return 0;
}

