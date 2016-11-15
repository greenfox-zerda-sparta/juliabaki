#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Write a program that prints a content of a file called "fifth-exercise.txt"
  // If it could not open the file it should write: "Could not open the file" to the standard error
  // The program should return 2 if there where an error

  ifstream my_file;
  my_file.open("fifth-exercise.txt");

  if (!my_file.is_open()) {
    cerr << "Could not open the file";
    return 2;
   } else {
     string file_content;
     while(my_file >> file_content){
       cout << file_content << endl;
     }
  }

  my_file.close();

  return 0;
}
