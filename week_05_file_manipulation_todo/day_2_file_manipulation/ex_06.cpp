#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string read_content(string file_name);

int main() {
  // Write a function that reads the content of a file and returns it as a string
  // It should take the filename as a string parameter

  ofstream my_file;
  string file_name = "exercise_6.txt";
  my_file.open("exercise_6.txt");
  my_file << "this is" << endl;
  my_file << "that is";
  my_file.close();

  cout << read_content(file_name);

  return 0;
}

string read_content(string file_name){
  string file_content;
  string result;
  ifstream read_file;
  read_file.open(file_name);
  if(read_file.is_open()){
   while(read_file >> file_content){
     result += file_content + ' ';
   }
  }
  read_file.close();
  return result;
}
