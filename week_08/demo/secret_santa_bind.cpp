#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <functional>

using namespace std;

void print(map<string, string> my_map) {
  for (map<string, string>::iterator it = my_map.begin(); it != my_map.end(); it++) {
    cout << it->first << " - " << it->second << endl;
  }
}

void make_pairs(string actual_name, vector<string>& remaining_names, map<string, string>& pairs) {
  if (actual_name != remaining_names[0]) {
    pairs[actual_name] = remaining_names[0];
    remaining_names.erase(remaining_names.begin());
  } else if (remaining_names.size() > 1) {
    pairs[actual_name] = remaining_names[1];
    remaining_names.erase(remaining_names.begin() + 1);
  } else {
    pairs[actual_name] = pairs.begin()->second;
    pairs.begin()->second = remaining_names[0];
  }
}

void choose_secret_santa(map<string, string>& pairs, vector<string> names) {
  srand(unsigned(time(0)));
  vector<string> remaining_names = names;
  random_shuffle(remaining_names.begin(), remaining_names.end());
  for_each(names.begin(), names.end(), bind(make_pairs, placeholders::_1, ref(remaining_names), ref(pairs)));
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
