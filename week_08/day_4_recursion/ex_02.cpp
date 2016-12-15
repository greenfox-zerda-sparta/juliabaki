#include <iostream>
#include <string>

using namespace std;

int count(int n) {
  if (n == 0) {
    return 0;
  } else {
    int result = count(n - 1);
    cout << n << endl;
    return result;
  }
}

int main() {
// write a recursive function
// that takes one parameter: n
// and adds numbers from 1 to n
  count(7);
  return 0;
}
