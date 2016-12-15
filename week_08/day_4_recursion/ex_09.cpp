#include <iostream>
#include <string>

using namespace std;

string change_x_to_y(string test) {
  string result = "";
  if (test.size() == 1) {
    result += test[0];
  } else {
    result += test[0];
    result += "*";
  }
  test.erase(test.begin(), test.begin() + 1);
  if (test.size() > 0) {
    result += change_x_to_y(test);
  }
  return result;
}

int main() {
// Given a string, compute recursively a new string where all the
// adjacent chars are now separated by a "*".

  string test = "xxXrtzXx";
  cout << "this is the original: " << test << endl;
  cout << "this is the result: " << change_x_to_y(test);

  return 0;
}
