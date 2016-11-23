#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string decrypt(string file_name);

int main() {
  // Create a program that decrypts the file called "duplicated-chars.txt",
  // and prints the decrypred text to the terminal window.

  cout << decrypt("duplicated-chars.txt");

  return 0;
}

string decrypt(string file_name){
  string text;
  string line;
  ifstream input_file;
  input_file.open(file_name);
  if(input_file.is_open()){
    while(getline(input_file, line)){
        for(unsigned int i = 0; i < line.length(); i++){
          if(i % 2 == 0){
            text += line[i];
          }
        }
       text += '\n';
    }
  }
  input_file.close();
  return text;
}
