#include <iostream>
#include <string>

using namespace std;

int digits(unsigned int n) {
  int sum = 0;
  sum += n % 10;
  if (n != 0){
    n = n / 10;
    sum += digits(n);
  }
  return sum;
}

int main() {
// Given a non-negative int n,
// return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6),
// while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

  unsigned int n = 98765;
  cout << digits(n);

  return 0;
}
