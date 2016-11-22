#include <iostream>
#include <string>
using namespace std;

// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segmetn in a new try-catch block.

const char* sentence[6] = { "What", "a", "pleasant", "surprie", "this", "is." };

string get(int input) throw (int, const char*) {
  if (input > 5) {
    throw -1;
  }
  if (input < 0) {
    throw "It is a negative number.";
  }
  return sentence[input];
}

int main() {
  try{
    cout << get(0) << endl;
    cout << get(1) << endl;
    cout << get(2) << endl;
    cout << get(8) << endl;
  }catch(int e){
    cout << "Error: " << e << endl;
  }

  try{
    cout << get(-2) << endl;
  }catch(const char* exp){
    cout << "Error: " << exp << endl;
  }

  return 0;
}
