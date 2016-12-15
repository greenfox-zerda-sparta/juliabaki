#include <iostream>
#include <string>

using namespace std;

int power(unsigned int base, unsigned int pow){
  int result = base;
  pow--;
  if(pow != 0){
    result *= power(base, pow);
  }
  return result;
}

int main() {
// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

  //27
  unsigned int base = 3;
  unsigned int pow = 3;

  cout << power(base, pow);

  return 0;
}
