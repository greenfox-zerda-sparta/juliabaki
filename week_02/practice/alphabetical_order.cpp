//============================================================================
// Name        : new.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

void alphabetical_order(string input, int length){
  for(int i = length; i > 2; i--){
    for(int j = 0; j < i-1; j++){
      if(input[j] > input[j+1]){
        char temp = input[j];
        input[j] = input[j+1];
        input[j+1] = temp;
      }
    }
  }
  for (int i = 0; i < length; i++){
      cout << input[i];
  }
}

int main() {
  string input = "zylawrq";
  int length = input.length();

  alphabetical_order(input, length);
  return 0;
}

