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
	string result = "";
	string word = "Apple";
	int times = 4;
	//fill the m variable with its content 4 times
	for(int a = 0; a < times; a++){
		result += word;
	}
	cout << result;
	return 0;
}
