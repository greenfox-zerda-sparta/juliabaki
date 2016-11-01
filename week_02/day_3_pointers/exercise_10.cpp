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

string safeConcat(string part1, string part2){
  string concat;
  concat = part1 + part2;

  return concat;
}
//Implement this function to create and return a new string which contains the two parts concatenated.

int main(int argc, char** argv) {
  string a = "kutya";
  string b = " es macska";
  string c = safeConcat(a, b);
  cout << "\"a\": " << a << endl;
  cout << "\"b\": " << b << endl;
  cout << "\"c\": " << c<< endl;
}

