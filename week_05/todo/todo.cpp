#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

void print_usage();

int main(int argc, char* argv[]) {

  print_usage();


  return 0;
}

void print_usage() {
  ifstream usage;
  usage.open("../usage.txt");
  string content;
  if (usage.is_open()) {
    while (getline(usage, content)) {
      cout << content << endl;
    }
  }
  usage.close();
}
