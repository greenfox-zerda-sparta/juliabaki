#include <iostream>
#include <vector>

using namespace std;

void add(vector<char>& v);

int main() {
  //create a vector of chars with the size of zero;
  //write a function where the user can add characters to the end of this vector

  vector<char> v(0);
  add(v);

  cout << v.at(0) << endl;

  return 0;
}

void add(vector<char>& v){
  char character;
  cout << "Enter a character: " << endl;
  cin >> character;
  v.push_back(character);
}
