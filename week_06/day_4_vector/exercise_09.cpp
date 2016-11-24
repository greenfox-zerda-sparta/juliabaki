#include <iostream>
#include <vector>

using namespace std;

int main() {
  //create a vector of vector of integers, yeah a vector that holds vectors of integers
  //the inner vectors have 5 integers, all of them 0
  //the outer vector is holding 5 vector at the beginning
  //create a function that will add a new vector of integers to the end of our outer vector

  vector< vector<int> > vec(5, vector<int>(5, 0));
  vec.push_back(vector<int>(5, 1));

  for(unsigned int i = 0; i < vec.size(); i++){
    for(unsigned int j = 0; j < vec[i].size(); j++){
      cout << vec[i][j] << " | ";
    }
    cout << endl;
  }

 return 0;
}
