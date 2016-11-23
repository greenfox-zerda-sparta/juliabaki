//===========================================================================
// Name        : exercise_11.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>


using namespace std;

void rotate_right(char matrix[5][5], char rotated_matrix[5][5]){
  for (int i = 0; i < 5; ++i) {
     for (int j = 0; j < 5; ++j) {
       rotated_matrix[i][j] = matrix[j][4-i];
     }
  }
}

int main() {
  char matrix[5][5] = {
    {' ', ' ', '#', ' ', ' '},
    {' ', '#', ' ', '#', ' '},
    {' ', '#', '#', '#', ' '},
    {' ', '#', ' ', '#', ' '},
    {' ', '#', ' ', '#', ' '}
  };

  char rotated_matrix[5][5];

  rotate_right(matrix, rotated_matrix);

  // write the rotate_right function that rotates the matrix to the left
  // so the program should print this:
  //
  // ####
  //   # #
  // ####

  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      cout << rotated_matrix[i][j];
    }
    cout << endl;
  }

  return 0;
}
