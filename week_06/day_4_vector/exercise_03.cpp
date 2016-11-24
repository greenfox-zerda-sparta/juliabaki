#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int>& v);

int main() {
  //Create a vector of integers
  //reserve place for 10 element, then fill those place with random numbers between 0 and 10

  vector<int> v;
  v.reserve(10);

  unsigned int capacity = v.capacity();
  for(unsigned int i = 0; i < capacity; i++){
    v.push_back(rand() % 10);
  }

  printVector(v);

  return 0;
}

void printVector(const vector<int>& v){
  unsigned int size = v.size();
  for(unsigned int i = 0; i < size; i++){
    cout << v[i] << endl;
  }
}
