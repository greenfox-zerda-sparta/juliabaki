//============================================================================
// Name        : exercise_16.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void printA(int matrix[3][3]) {
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++){
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void printB(int matrix[3][3]) {
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++){
    cout << matrix[j][i] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void printC(int matrix[3][3]) {
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++){
      if (i == 2 && j == 2){
        cout << matrix[i][j];
      } else {
        cout << matrix[i][j] << "|";
        }
    }
  cout << endl;
  }
  cout << endl;
}

void printD(int matrix[3][3]) {
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++){
    cout << matrix[i][j] << endl;
    }
  }
  cout << endl;
}

int main(){
	int m[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
	//This is an array of arrays. Print it out as a 3x3 matrix. Using each inner array as
	//a.) a row
	//b.) a column
	//c.) all in one line separated by the character '|'
	//d.) all in one column

	printA(m);
  printB(m);
  printC(m);
  printD(m);
	/*
	 * m[0] -> {1, 2, 3}
	 * int n[3] = m[0];
	 * n[0] -> 1
	 * n[1] -> 2
	 *
	 * m[0][0] -> 1
	 *
	  a,
	  1 2 3
	  4 5 6
	  7 8 9

	  b,

	  1 4 7
	  2 5 8
	  3 6 9

	  [0][0] [1][0] [2][0]
	  [0][1] [1][1] [2][1]
	  [0][2] [1][2] [2][2]

	  c,
	  1|2|3|4|5|6|7|8|9

	  d,
	  1
	  2
	  3
	  4
	  5
	  6
	  7
	  8
	  9
	 */

	return 0;
}
