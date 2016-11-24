#include <iostream>
#include <vector>

using namespace std;

void increaseSpecificElementsByOne(vector<int>& v, unsigned int index);
void printVector(const vector<int>& v);

int main() {
  //create a vector of vector of integers
  //the inner vectors have 5 integers, all of them 0
  //the outer vector is holding 5 vector
  //create a function which increase a specific element of an inner vector by 1

  vector< vector<int> > vec(5, vector<int>(5, 0));
  try{
    increaseSpecificElementsByOne(vec[0], 2);
    printVector(vec[0]);
  } catch(const char* e){
    cout << "Error: " << e << endl;
  }

  return 0;
}

void increaseSpecificElementsByOne(vector<int>& v, unsigned int index){
  unsigned int size = v.size();
  if(v.empty()){
    throw "The vector is empty!";
  } else if (index < 0 || index > size){
    throw "Invalid index!";
  } else {
    v[index]++;
  }
}

void printVector(const vector<int>& v) {
  unsigned int size = v.size();
  for (unsigned int i = 0; i < size; i++) {
    cout << v[i] << " ";
  }
}
