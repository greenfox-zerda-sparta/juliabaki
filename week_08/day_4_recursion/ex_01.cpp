#include <iostream>
#include <string>

using namespace std;

int count_down(int n) {
  cout << n << endl;
  n--;
  if(n != -1){
    count_down(n);
  }
  return n;
}

int main() {
// write a recursive function
// that takes one parameter: nb
// and counts down from n

  count_down(7);

  return 0;
}
