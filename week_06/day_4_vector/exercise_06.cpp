#include <iostream>
#include <vector>

using namespace std;

void add(vector<double>& v);
void printVector(const vector<double>& v);

int main() {
  //create a vector of doubles with the size of 30, with every element equal of 1.5
  //create functions that takes this vector, pick the last element of it and adding its value to
  //an other item from the vector(this item place is random) and remove the last element at the end
  //run this function 20 times, then print every element of the vector

  vector<double> v(30, 1.5);

  for(int i = 0; i < 20; i++){
    add(v);
  }

  printVector(v);

  return 0;
}

void add(vector<double>& v){
  double last_element = v.back();
  int i = v.size();
  v.at(rand() % i) += last_element;
  v.pop_back();
}

void printVector(const vector<double>& v){
  unsigned int size = v.size();
  for(unsigned int i = 0; i < size; i++){
    cout << v[i] << endl;
  }
}
