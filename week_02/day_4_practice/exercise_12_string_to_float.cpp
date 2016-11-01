//============================================================================
// Name        : string_to_float_2.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

float stof(const char* s){
  float rez = 0, fact = 1;
  if (*s == '-'){
    s++;
    fact = -1;
  }
  for (int point_seen = 0; *s; s++){
    if (*s == '.'){
      point_seen = 1;
    }
    int d = *s - '0'; //ascii table
    if (d >= 0 && d <= 9){
      if (point_seen){
        fact /= 10.0f;
      }
      rez = rez * 10.0f + (float)d;
    }
  }
  return rez * fact;
}


int main() {
  double number = stof("-2.4");

  cout << number / 2 << endl; // should print -1.2
	return 0;
}
