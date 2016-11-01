//============================================================================
// Name        : exercise_07.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void printStars(int number){
  string stars = " ";
  for(int j = 0; j < number; j++){
    for(int i = 0; i < 1; i++){
    stars += "*";
    }
    cout << stars << endl;
  }
}

int main() {
  // create a function that takes a number and prints a triangle like this:
  // *
  // **
  // ***
  // ****
  // *****
  // ******
  //
  // The triangle should have as many lines as the value in the argument

  printStars(6);

  return 0;
}
