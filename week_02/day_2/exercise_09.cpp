//============================================================================
// Name        : exercise_09.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

void greet(string name){
	cout << "Hello" << " "<< name;
}

int main() {
  // create a function that takes a string argument and greets it.
	string i = "Jozsi";
	greet(i);

  return 0;
}
