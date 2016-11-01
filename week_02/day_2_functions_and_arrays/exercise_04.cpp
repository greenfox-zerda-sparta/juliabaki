//============================================================================
// Name        : exercise_04.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int d[] = {1, 2, 3, 8, 5, 6};
	// change 8 to 4, than print all the elements of the array

	d[3] = 4;
	int length = sizeof(d)/sizeof(int);
		for (int i = 0; i < length; i++){
			cout << d[i] << endl;
		}

  return 0;
}
