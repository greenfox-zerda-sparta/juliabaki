//============================================================================
// Name        : exercise_08_christmas_tree_with_stars_own.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//============================================================================
// Name        : exercise_8_own.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void printStars(int number){
  for(int row = 0; row < number; row++){
    for(int i = 0; i < number-row; i++){
      cout << " ";
    }
    for(int j = 0; j < row*2+1; j++){
      cout << "*";
    }
    cout << endl;
  }
}

int main() {
  // Create a function that takes a number and prints a triangle like this:
  //
  //      *
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********
  //
  // The triangle should have as many lines as the value in the argument

  printStars(6);

  return 0;
}
