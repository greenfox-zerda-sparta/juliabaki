//============================================================================
// Name        : exercise_22.cpp
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
	int ac = 8;
	int time = 120;
	string out = "";
	// if ac is dividable by 4
	// and time is not more than 200
	// set out to 'check'
	// if time is more than 200
	// set out to 'Time out'
	// otherwise set out to 'Run Forest Run!'
	if ((ac%4 == 0)&& (time <= 200)){
		out = "check";
		cout << out;
	} else if (time > 200){
		out = "Time out";
		cout << out;
	} else {
		out = "Run Forest Run!";
		cout << out;
	}
	return 0;
}
