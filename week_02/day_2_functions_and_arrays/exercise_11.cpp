//============================================================================
// Name        : exercise_11.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

void plusa(string word){
	cout << word << "a";
}

int main() {
  string k = "kuty";
  // write a function that gets a string as an input
  // and appends an 'a' character to its end

  plusa(k);

  return 0;
}
