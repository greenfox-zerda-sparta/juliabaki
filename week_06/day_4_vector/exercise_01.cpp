#include <iostream>
#include <vector>

using namespace std;

int main() {
  //create an integer vector with the size of 5 and print the 3rd element of it
  vector<int> v(5);

  unsigned int size = v.size();
  for(unsigned int i = 0; i < size; i++){
    v[i] = i;
  }

  cout << v[2];

  return 0;
}
