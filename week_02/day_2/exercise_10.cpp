//============================================================================
// Name        : exercise_10.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int DoubleInput(int number){
	number = number * number;
	return number;
}

int main() {
  int j = 123;
  // create a function that doubles it's input
  // double j with it
  cout << DoubleInput(j);

  return 0;
}
