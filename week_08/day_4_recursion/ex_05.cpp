#include <iostream>
#include <string>

using namespace std;

int how_many_ears(int number_of_bunny){
  int sum_of_ears = 2;
  number_of_bunny--;
  if(number_of_bunny > 0){
    sum_of_ears += how_many_ears(number_of_bunny);
  }
  return sum_of_ears;
}

int main() {
// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies
// recursively (without loops or multiplication).

  int number_of_bunny = 5;
  cout << how_many_ears(number_of_bunny);

  return 0;
}
