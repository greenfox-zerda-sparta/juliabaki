//============================================================================
// Name        : roman_number.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "Please write a number:" << endl;
	int number;
	cin >> number;

	string roman = "";
	int m = number / 1000;
	int left = number % 1000;
	for (int i = 0; i < m; i++) {
		roman = roman + "M";
	}
	m = left / 900;
	left = left % 900;
	for (int i = 0; i < m; i++) {
		roman = roman + "CM";
	}
	m = left / 500;
	left = left % 500;
	for (int i = 0; i < m; i++) {
		roman = roman + "D";
	}
	m = left / 400;
	left = left % 400;
	for (int i = 0; i < m; i++) {
		roman = roman + "CD";
	}
	m = left / 100;
	left = left % 100;
	for (int i = 0; i < m; i++) {
		roman = roman + "C";
	}
	m = left / 90;
	left = left % 90;
	for (int i = 0; i < m; i++) {
		roman = roman + "XC";
	}
	m = left / 50;
	left = left % 50;
	for (int i = 0; i < m; i++) {
		roman = roman + "L";
	}
	m = left / 40;
	left = left % 40;
	for (int i = 0; i < m; i++) {
		roman = roman + "XL";
	}
	m = left / 10;
	left = left % 10;
	for (int i = 0; i < m; i++) {
		roman = roman + "X";
	}
	m = left / 9;
	left = left % 9;
	for (int i = 0; i < m; i++) {
		roman = roman + "IX";
	}
	m = left / 5;
	left = left % 5;
	for (int i = 0; i < m; i++) {
		roman = roman + "V";
	}
	m = left / 4;
	left = left % 4;
	for (int i = 0; i < m; i++) {
		roman = roman + "IV";
	}
	for (int i = 0; i < left; i++) {
		roman = roman + "I";
	}

	cout << roman;

	return 0;
}
