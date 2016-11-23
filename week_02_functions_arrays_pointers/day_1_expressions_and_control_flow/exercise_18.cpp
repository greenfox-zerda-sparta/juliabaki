//============================================================================
// Name        : exercise_18.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	std :: string x = "monkey";
	// if the string is longer than 4 characters***
	// print 'Long!' otherwise print 'Short!'

	if (x.length() > 4){
		cout << "Long!";
	} else {
		cout << "Short!";
	}
	return 0;
}
