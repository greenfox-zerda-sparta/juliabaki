//============================================================================
// Name        : roman_number_2.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;


string roman = "";

int counter(int special, string character, int number) {
	int m = number/special;
	int left = number%special;
	for (int i =0; i < m; i++){
		roman = roman + character;
	}
	return left;
}
int main() {
	cout << "Please write a number:" << endl;
	int number;
	cin >> number;

	number = counter (1000, "M", number);
	number = counter (900, "CM", number);
	number = counter (500, "D", number);
	number = counter (400, "CD", number);
	number = counter (100, "C", number);
	number = counter (90, "XC", number);
	number = counter (50, "L", number);
	number = counter (40, "XL", number);
	number = counter (10, "X", number);
	number = counter (9, "IX", number);
	number = counter (5, "V", number);
	number = counter (4, "IV", number);
	number = counter (1, "I", number);

	cout << roman;

	return 0;
}
