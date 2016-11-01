//============================================================================
// Name        : palindrome_1.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//============================================================================
// Name        : palindrome_1.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int CstringLength(string word){
  int length = 0;
  while (word[length] != '\0'){
    length++;
  }
  return length;
}

string createPalindrome(string input, int length){
  string palindrome = input;
  for(int i = length-1; i >= 0; i--){
    palindrome += input[i];
  }
  return palindrome;
}

int main() {
  string word = "pear";
  string output;
  int length;
  length = CstringLength(word);
  //string.length() string = string neve
  //reverse()

  output = createPalindrome(word, length);
  cout << output << endl;

  return 0;
}

