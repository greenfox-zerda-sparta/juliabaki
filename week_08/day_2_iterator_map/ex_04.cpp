#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

// write a function that takes a string and returns a map
// the map should have the letters of the string as keys and
// it should have integers as values that represents how many times the
// letter appeared int the string

void print(map<char, int> my_map) {
  for (map<char, int>::iterator it = my_map.begin(); it != my_map.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }
}

map<char, int> make_map(string input) {
  map<char, int> my_map;
  for (string::iterator it = input.begin(); it != input.end(); it++) {
    my_map.insert(std::make_pair(*it, my_map[*it]++));
  }
  return my_map;
}

int main() {
  print(make_map("alma"));
  return 0;
}
