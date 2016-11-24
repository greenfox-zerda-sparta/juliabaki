#include <iostream>
#include <vector>

using namespace std;

int main() {
  //create a vector of integers with the size of 10, fill them with random numbers
  //create a vector of doubles and reserve place for 10 items
  //push an item to the end of the vector with a double
  //print which vectors size is higher (and why?)

  vector<int> v(10);
  unsigned int size = v.size();
  for (unsigned int i = 0; i < size; i++) {
    v[i] = rand() % 10;
  }

  cout << "integer vector size: " << v.size() << endl;

  vector<double> double_v;
  double_v.reserve(10);
  double_v.push_back(7.45);

  cout << "double vector size: " << double_v.size() << endl;

  return 0;
}
