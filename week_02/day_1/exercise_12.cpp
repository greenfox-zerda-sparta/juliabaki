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

int main() {
	string m = "Apple";
	//fill the m variable with its content 4 times
	for(int a = 1; a <= 2; a++){
		m+= m;
	}
	cout << m;
	return 0;
}
