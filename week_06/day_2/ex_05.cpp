#include <iostream>
#include <string>
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
  input += character;
  unsigned int i = 0;
  int counter = 0;
  string* result = nullptr;
  while (i < (input.length())) {
    if (input[i] == character) {
      counter++;
    }
    i++;
  }
  if (counter == 0) {
    throw "I can't find the character in the string.";
  } else {
    result = new string[counter];
    string temp = "";
    int temp_count = 0;
    for(unsigned int j = 0; j < input.length(); j++){
      temp += input[j];
      if(input[j] == character){
        result[temp_count] = temp;
        temp_count++;
        temp = "";
      }
    }
  }
  return result;
}

int main() {
  try {
    string* result_1;
    result_1 = split("Most ezzel probálom meg", ' ');
    for(int i = 0; i < 4; i++){
      cout << result_1[i] << endl;
    }
  } catch(const char* exp) {
    cout << "Error: " << exp << endl;
  }
  return 0;
}
