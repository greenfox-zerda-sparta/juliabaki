#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <stdio.h>
#include <ctype.h>

using namespace std;

// Write a program that creates a text file named alice_words.txt
// containing an alphabetical listing of all the words,
// and the number of times each occurs, in the text version of
// Alice�s Adventures in Wonderland.
// (You can obtain a free plain text version of the book,
// along with many others, from http://www.gutenberg.org.)
//
// The first 10 lines of your output file should look something like this:
//
// Word              Count
// =======================
// a                 631
// a-piece           1
// abide             1
// able              1
// about             94
// above             3
// absence           1
// absurd            2
//
// How many times does the word alice occur in the book?
// What is the longest word in Alice in Wonderland?
// How many characters does it have?

bool isValid(string input) {
  for (unsigned int i = 0; i < input.length(); i++) {
    if (!isalnum(input[i]) || isdigit(input[i])) {
      return false;
    }
  }
  return true;
}

int main() {

  map<string, int> words;
  int value = 0;

  try {
    string word;
    ifstream myfile("alice_in_wonderland.txt");
    if (myfile.is_open()) {
      while (myfile >> word) {
        if (isValid(word)) {
          for (unsigned int i = 0; i < word.length(); ++i) {
            word[i] = tolower(word[i]);
          }
          words.insert(make_pair(word, value++));
        }
      }
      myfile.close();
    } else {
      throw "Not able to read this file.";
    }
  } catch (const char* error) {
    cout << "Error: " << error << endl;
  }

  ofstream new_file;
  new_file.open("alice_words_occurence.txt");
  new_file << setw(20) << left << "Word" << "Count" << '\n';
  new_file << setfill('=') << setw(25) << right << "=" << '\n';
  for (map<string, int>::iterator it = words.begin(); it != words.end(); it++) {
    new_file << setfill(' ') << setw(20) << left << it->first << right << it->second << '\n';
  }
  new_file.close();

  return 0;
}
