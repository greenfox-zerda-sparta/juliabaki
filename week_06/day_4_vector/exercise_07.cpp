#include <iostream>
#include <vector>

using namespace std;

void fillUp(vector<int>& v);
void removeEvens(vector<int>& v);
void printVector(const vector<int>& v);

int main() {
  //create a vector of integers with the size of 20
  //fill this vector with random numbers from 0 to 10
  //print the items of the vector
  //remove the even numbers, then print the items again

  vector<int> v(20);

  fillUp(v);
  printVector(v);
  cout << endl;
  removeEvens(v);
  printVector(v);

  return 0;
}

void fillUp(vector<int>& v) {
  unsigned int size = v.size();
  for (unsigned int i = 0; i < size; i++) {
    v[i] = rand() % 10 + 1;
  }
}

void removeEvens(vector<int>& v) {
  for (unsigned int i = 0; i < v.size(); i++) {
    if (v.at(i) % 2 == 0) {
      v.erase(v.begin() + i);
      i--;
    }
  }
}

void printVector(const vector<int>& v) {
  unsigned int size = v.size();
  for (unsigned int i = 0; i < size; i++) {
    cout << v[i] << " | ";
  }
}
