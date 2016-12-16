#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

// Write a simple program that creates secret santa pairs
// It should read names till the character q is typed to the standard output,
// than it should print the names as secret santa pairs like:
// Clair - Mike
// Joe - Ron
// Cloe - Clair
// Ron - Cloe
// Mike - Joe

void print(map<string, string> my_map) {
  for (map<string, string>::iterator it = my_map.begin(); it != my_map.end(); it++) {
    cout << it->first << " - " << it->second << endl;
  }
}

void choose_secret_santa(map<string, string>& pairs, vector<string> names) {
  std::srand(unsigned(std::time(0)));
  std::random_shuffle(names.begin(), names.end());
  for_each(names.begin(), names.end(), [](string element) {cout << element << endl;});
  for (map<string, string>::iterator it = pairs.begin(); it != pairs.end(); it++) {
    if (it->first != names[0]) {
      it->second = names[0];
      names.erase(names.begin());
    } else if (names.size() > 1) {
      it->second = names[1];
      names.erase(names.begin() + 1);
    } else {
      it->second = pairs.begin()->second;
      pairs.begin()->second = names[0];
    }
  }
}

int main() {
  map<string, string> pairs;
  cout << "Enter names, press q for quit" << endl;
  string name;
  vector<string> names;
  while (name != "q") {
    cin >> name;
    if (name != "q") {
      names.push_back(name);
      pairs.insert(std::make_pair(name, ""));
    }
  }

  choose_secret_santa(pairs, names);
  print(pairs);

  return 0;
}
