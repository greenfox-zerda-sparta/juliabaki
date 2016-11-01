//============================================================================
// Name        : exercise_06.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int f[] = { 3, 4, 5, 6, 7 };
	// Please double all the elements, than print all of them

	int length = sizeof(f) / sizeof(int);
		for (int i = 0; i < length; i++) {
			f[i] = f[i]*2;
			cout << f[i] << endl;
		}

	return 0;
}
