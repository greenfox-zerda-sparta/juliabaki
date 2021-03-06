#include <iostream>
#include <vector>

using namespace std;

void increaseElementsByOne(vector<int>& v);
void printVector(const vector<int>& v);

int main() {
  //create a vector of vector of integers
  //the inner vectors have 5 integers, all of them 0
  //the outer vector is holding 5 vector
  //create a function which increase the given inner vector elements by 1 (one inside vector, holding five 0)

  vector< vector<int> > vec(5, vector<int>(5, 0));

  increaseElementsByOne(vec[0]);
  printVector(vec[0]);

  return 0;
}

void increaseElementsByOne(vector<int>& v){
  unsigned int size = v.size();
  for(unsigned int i = 0; i < size;  i++){
    v[i]++;
  }
}

void printVector(const vector<int>& v) {
  unsigned int size = v.size();
  for (unsigned int i = 0; i < size; i++) {
    cout << v[i] << " ";
  }
}
