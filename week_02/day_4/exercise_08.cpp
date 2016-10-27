//============================================================================
// Name        : exercise_08.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void draw_characters(int count, char c) {
  for (int i = 0; i < count; ++i) {
    cout << c;
  }
}

void christmas_tree(char main_character, int times) {
  for (int row = 1; row <= times; ++row) {
    draw_characters(times - row, ' ');
    draw_characters(row * 2 - 1, main_character);
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

  christmas_tree('#', 8);

  return 0;
}
