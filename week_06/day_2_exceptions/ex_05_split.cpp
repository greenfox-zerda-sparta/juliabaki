#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

// Write a function that receives a string and a character.
// The function should return an array of strings.
// The function should split the string at the character it receives as the second argument.
// The character it uses to split should not be in any of the new strings.
// Example: split("What a nice day", ' ');
// Result: {"What", "a", "nice",  "day"}
// If the character is not in the string throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

string* split(string input, char character) throw (const char*) {
  unsigned int i = 0;
  int number_of_words = 1;
  string* words = nullptr;
  while (i < input.length()) {
    if (input[i] == character) {
      number_of_words++;
    }
    i++;
  }
  if (number_of_words == 1) {
    throw "I can't find the character in the string.";
  } else {
    words = new string[number_of_words];
    int word_count = 0;
    for (unsigned int j = 0; j < input.length(); j++) {
      if (input[j] == character) {
        word_count++;
      } else {
        words[word_count] += input[j];
      }
    }
  }
  return words;
}

int main() {
  string test_strings[5] = {
      "Most|ezzel|probálom|meg",
      "Masik|teszt|haha|haha",
      "Hibas teszt",
      "Masikhibasteszt",
      "Megint|jo|haha|haha"
  };
  for (unsigned int i = 0; i < 5; i++) {
    try {
      cout << "Teszt: " << test_strings[i] << endl << "Eredmeny: " << endl;
      string* result = split(test_strings[i], '|');
      for (int i = 0; i < 4; i++) {
        cout << result[i] << endl;
      }
    } catch (const char* exp) {
      cout << "Error: " << exp << endl;
    }
    cout << endl;
  }

  return 0;
}
