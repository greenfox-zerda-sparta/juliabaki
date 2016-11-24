#include <iostream>
#include <vector>

using namespace std;

void fillUp(vector<double>& v);
void printVector(const vector<double>& v);
void ascendingOrder(vector<double>& v);

int main() {
  //find how much integer divisor 2400 has
  //create a vector of doubles, reserve place for the divisors of 2400
  //fill this places with random numbers from 0 to 2400
  //sort them in ascending order

  unsigned int counter = 0;

  for (int i = 1; i <= 2400; i++) {
    if (2400 % i == 0) {
      counter++;
    }
  }

  vector<double> v(counter);
  fillUp(v);
  printVector(v);

  cout << endl;

  ascendingOrder(v);
  printVector(v);

  return 0;
}

void fillUp(vector<double>& v) {
  unsigned int size = v.size();
  for (unsigned int i = 0; i < size; i++) {
    v[i] = rand() % 2400 + 1;
  }
}

void printVector(const vector<double>& v) {
  unsigned int size = v.size();
  for (unsigned int i = 0; i < size; i++) {
    cout << v[i] << " ";
  }
}

void ascendingOrder(vector<double>& v) {
  unsigned int length = v.size();
  for (unsigned int i = 0; i < length; i++) {
    for (unsigned int j = i + 1; j < length; j++) {
      if (v[i] > v[j]) {
        int temp;
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
      }
    }
  }
}
