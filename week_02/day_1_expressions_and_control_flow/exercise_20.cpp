//============================================================================
// Name        : exercise_20.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int z = 13;
	// if z is between 10 and 20 print 'Sweet!'
	// if less than 10 print 'More!',
	// if more than 20 print 'Less!'
	if (z > 10 && z < 20){
		cout << "Sweet!";
	} else if (z < 10){
		cout << "More!";
	} else {
		cout << "Less!";
	}
	return 0;
}
