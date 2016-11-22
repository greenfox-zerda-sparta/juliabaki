#include <iostream>
#include <string>
using namespace std;

// Write a function that receives a string and an unsigned integer.
// The function should return an array of strings, with two string in it.
// The first string should be the first part of the original string
// Characters in range [0,index-1].
// The second part should be the rest of the string characters range [index,length-1]
// Example: split("Rebarbara", 2)
// Result: {"Re", "barbara"}
// If the index is out of bounds, throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

string* split(string word, unsigned int index) {
  string* result = new string[2];
  string first_part;
  string second_part;
  if (index >= word.length()) {
    throw "The index is out of bound.";
  } else {
    for (unsigned int i = 0; i < index; i++) {
      first_part += word[i];
    }
    for (unsigned int j = index; j < word.length(); j++) {
      second_part += word[j];
    }
    result[0] = first_part;
    result[1] = second_part;
  }
  return result;
}

int main() {

  try {
    string* result_1 = split("Rebarabara", 2);
    cout << "Split result: " << result_1[0] << " " << result_1[1] << endl;
    string* result_2 = split("Rebarabara", 15);
    cout << "Split result: " << result_2[0] << " " << result_2[1] << endl;
    delete[] result_1;
    result_1 = nullptr;
    delete[] result_2;
    result_2 = nullptr;
  } catch (const char* excp) {
    cout << "Exception: " << excp << endl;
  }
  return 0;
}
