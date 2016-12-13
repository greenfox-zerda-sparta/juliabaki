#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(int element){
  cout << element << endl;
}

int main() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }

  // Print the first 5 elements of the vector using iterators

  for_each(v.begin(), v.begin() + 5, print);
  for_each(v.begin(), v.begin() + 5, [](int element){cout << element << endl;});

  return 0;
}
