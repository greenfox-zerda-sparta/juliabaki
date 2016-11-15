#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string read_file(string input_file_name);
bool write_file(string output_file_name, string file_content);
bool copy(string input_file_name, string output_file_name);

int main() {
  // Write a function that copies a file to an other
  // It should take the filenames as parameters
  // It should return a boolean that shows if the copy was successful
  ofstream my_file;
  string file_name = "exercise_8.txt";
  my_file.open("exercise_8.txt");
  my_file << "this is" << endl;
  my_file << "that is";
  my_file.close();

  cout << copy("exercise_8.txt", "az.txt");

  return 0;
}

string read_file(string input_file_name){
  string file_content = "";
  ifstream input_file;
  input_file.open(input_file_name);
  if(input_file.is_open()){
    string temp_file_content;
    while(input_file >> temp_file_content){
      file_content += temp_file_content + ' ';
    }
  } else {
    cerr << "Could not open the file." << endl;
  }
  input_file.close();
  return file_content;
}

bool write_file(string output_file_name, string file_content){
  ofstream output_file;
  output_file.open(output_file_name);
  if(output_file.is_open()){
    output_file << file_content;
    output_file.close();
    return true;
  }
  return false;
}

bool copy(string input_file_name, string output_file_name){
  bool result = false;
  if(write_file(output_file_name, read_file(input_file_name))){
    result = true;
  }
  return result;
}
