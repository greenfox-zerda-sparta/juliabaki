#include <iostream>
#include <vector>

using namespace std;

void fillUp(vector<char>& v, const vector<char>& greenfox);
void printVector(const vector<char>& v);

int main() {
  //create a vector of characters with the size of 8
  //ask the user to fill this vector with characters one by one
  //at the end make sure the vector holds the letters of "GREENFOX"
  //so correct the user if he/she gives a different letter from the one we want them to give :)

  vector<char> v;
  v.reserve(8);
  vector<char> greenfox = {'G','R','E','E','N','F','O','X'};

  fillUp(v, greenfox);
  printVector(v);

  return 0;
}

void fillUp(vector<char>& v, const vector<char>& greenfox) {
  char character;
  while (v.size() != v.capacity()) {
    cout << "Please enter a character: " << endl;
    cin >> character;
    if(greenfox[v.size()] == character){
      v.push_back(character);
    } else {
      cout << "This is not the character, which I expected. The right character is: " << greenfox[v.size()] << endl;
    }
  }
}

void printVector(const vector<char>& v) {
  unsigned int size = v.size();
  for (unsigned int i = 0; i < size; i++) {
    cout << v[i] << " ";
  }
}
