#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

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
  for (map<string, string>::iterator it = my_map.begin(); it != my_map.end();
      it++) {
    cout << it->first << " - " << it->second << endl;
  }
}

void choose_secret_santa(map<string, string>& secret_santa, vector<string> names) {
  std::random_shuffle(names.begin(), names.end());
  int i = 0;
  for (map<string, string>::iterator it = secret_santa.begin(); it != secret_santa.end(); it++) {
    if(it->second == names[i]){
      choose_secret_santa(secret_santa, names);
    }
    it->second = names[i];
    i++;
  }
}

int main() {
  map<string, string> secret_santa;
  cout << "Enter names, press q for quit" << endl;
  string name;
  vector<string> names;
  while (name != "q") {
    cin >> name;
    if (name != "q") {
      names.push_back(name);
      secret_santa.insert(std::make_pair(name, name));
    }
  }

  choose_secret_santa(secret_santa, names);
  print(secret_santa);

  return 0;
}
