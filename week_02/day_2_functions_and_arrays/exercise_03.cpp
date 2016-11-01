//============================================================================
// Name        : exercise_03.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int d[] = {6, 5, 4, 3, 2, 1};
	// print all the elements of the array

	int length = sizeof(d)/sizeof(int);
	for (int i = 0; i < length; i++){
		cout << d[i] << endl;
	}

  return 0;
}
