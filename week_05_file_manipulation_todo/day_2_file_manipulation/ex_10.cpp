#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string decrypt(string file_name);

int main() {
  // Create a program that decrypts the file called "reversed-lines.txt",
  // and pritns the decrypred text to the terminal window.

  cout << decrypt("reversed-lines.txt");

  return 0;
}

string decrypt(string file_name){
  string text;
  string line;
  ifstream input_file;
  input_file.open(file_name);
  if(input_file.is_open()){
    while(getline(input_file, line)){
        for(unsigned int i = line.length(); i > 0; i--){
          text += line[i];
        }
       text += '\n';
    }
  }
  input_file.close();
  return text;
}
