//============================================================================
// Name        : exercise_13_string_operations.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

string find_word(string& input, int& index, int length) {
  char end_of_word = ' ';
  string word = "";
  while (input[index] != end_of_word && index < length) {
    word += input[index];
    index++;
  }
  return word;
}

string print_strings_new_line(string input, int length) {
  string strings_in_new_lines = "";
  int index = 0;
  while (index < length) {
    string word = find_word(input, index, length);
    strings_in_new_lines += word + '\n';
    index++;
  }
  return strings_in_new_lines;
}

void put_words_into_array(string input, string* words, int length) {
  int index = 0;
  int i = 0;
  while (index < length) {
    string word = find_word(input, index, length);
    words[i] = word;
    i++;
    index++;
  }
}

// Create a function that prints each word in a string into a new line!
// Create an other function that takes a string and an array of strings as it's input
// and puts each word in the original string into a new element in the array of strings.
// Decide which argument should be a pointer and which shouldn't.
// In the main function, print out each element of the array into a new line!

int main(int argc, char **argv) {
  string input = "Apple Pear Nuts";
  int length = input.length();
  cout << print_strings_new_line(input, length);

  string words[3];
  put_words_into_array(input, words, length);
  for(int i = 0; i < 3; i++){
    cout << words[i] << endl;
  }
  return 0;
}
