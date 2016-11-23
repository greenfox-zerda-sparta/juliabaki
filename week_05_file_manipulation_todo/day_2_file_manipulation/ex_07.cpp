#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void write_string_to_file(string file_name, string content);

int main() {
  // Write a function that writes a string to a file
  // It should take the filename and the content as a string parameter

  write_string_to_file("test.txt", "This is a test.");

  return 0;
}

void write_string_to_file(string file_name, string content) {
  ofstream new_file;
  new_file.open(file_name);
  if(new_file.is_open()){
    new_file << content;
    new_file.close();
  }
}
