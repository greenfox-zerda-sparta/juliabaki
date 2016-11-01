//============================================================================
// Name        : exercise_13.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int factcount(int number) {
	int i = number;
	int factorial = 1;
	while(i != 1) {
		factorial = factorial * i;
		i--;
	}
	return factorial;
}

/* int factcount1(int number){
	if(number > 1){
		return number * factcount(number - 1);
	}
	else {
		return 1;
	}
}
*/

int main() {
	// create a function that returns it's input factorial
	cout << "Please write a number:" << endl;
	int number;
	cin >> number;

	cout << "Factorial:";
	cout << factcount(number);
	//cout << factcount1(number);
	return 0;
}
