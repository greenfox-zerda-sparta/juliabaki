#include <iostream>
#include <string>

using namespace std;

int how_many_antlers(int reindeers){
  int sum_of_antlers = 2;
  reindeers--;
  if(reindeers > 0 && reindeers % 2 != 0){
    sum_of_antlers += how_many_antlers(reindeers);
  } else if (reindeers > 0 && reindeers % 2 == 0){
    sum_of_antlers += how_many_antlers(reindeers) + 1;
  }
  return sum_of_antlers;
}

int main() {
// We have reindeers standing in a line, numbered 1, 2, ... The odd reindeers
// (1, 3, ..) have the normal 2 antlers. The even reindeers (2, 4, ..) we'll say
// have 3 antlers, because they each have a raised branch (how funny they are, arent they?).
// Recursively return the number of "antlers" in the reindeer line 1, 2, ... n (without loops or
// multiplication).

  int reindeers = 3;
  cout << how_many_antlers(reindeers);

  return 0;
}
