#include <iostream>
#include <string>

using namespace std;

string change_x_to_y(string test) {
  string result = "";
  if (test[0] == 'x') {
    result += 'y';
  } else {
    result += test[0];
  }
  test.erase(test.begin(), test.begin() + 1);
  if (test.size() > 0) {
    result += change_x_to_y(test);
  }
  return result;
}

int main() {
// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.

  string test = "xxXrtzXx";
  cout << "this is the original: " << test << endl;
  cout << "this is the result: " << change_x_to_y(test);

  return 0;
}
