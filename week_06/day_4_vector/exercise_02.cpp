#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int>& v);

int main() {
  //create an integer vector with the size of 5 and print all elements of it

  vector<int> v(5);

  unsigned int size = v.size();
  for (unsigned int i = 0; i < size; i++) {
    v[i] = i;
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
