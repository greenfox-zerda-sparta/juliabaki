//============================================================================
// Name        : ex.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//============================================================================
// Name        : exercise_diamond.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void print_diamond(int number){
  for(int i = 0; i < number; i++){
    for(int j = number; j > i; j--){
      cout << " ";
    }
    for(int j = 0; j < i*2-1; j++){
            cout << "*";
    }
    cout << endl;
  }
  for(int i = 0; i < number; i++){
    for(int j = 0; j < i; j++){
      cout << " ";
    }
    for(int j = 0; j < (number-i)*2-1; j++){
      cout << "*";
    }
    cout << endl;
    }

}

int main() {
  int number;
  // Create a function that takes a number and prints a diamond like this:
  //
  //      *
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********
  //  *********
  //   *******
  //    *****
  //     ***
  //      *
  //
  // The diamond should have as many lines as the value in the argument

  cout << "Please type a number:" << endl;
  cin >> number;
  cout << number << endl;

  print_diamond(number);
  return 0;
}
