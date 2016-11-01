//============================================================================
// Name        : practice_pointer.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void pointerFunc(int* param) {
  cout << param << endl;
} // pointer ami rámutat egy memóriaterületre (értéke egy cím) *param = value

void referenceFunc(int& param) {
  cout << param << endl;
} // egy másik név ugyanarra a memóriaterületre (referenicia)

void valueFunc(int param) {
  cout << param << endl;
} // ugyanaz az érték csak másik memóriaterületen (másolat)

int main() {
  int variable = 42;

  pointerFunc(&variable);

  referenceFunc(variable);

  valueFunc(variable);

	return 0;
}
