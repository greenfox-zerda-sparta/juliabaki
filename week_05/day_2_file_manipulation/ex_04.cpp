#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Open a file called "fourth-exercise.txt"
  // Print all of its lines to the terminal window

  ofstream my_write;
  my_write.open("fourth-exercise.txt");
  my_write << "Apple" << endl;
  my_write << "Pear" << endl;
  my_write << "Melon" << endl;
  my_write << "Peach" << endl;
  my_write << "Banana" << endl;

  my_write.close();

  ifstream my_read;
  my_read.open("fourth-exercise.txt");

  string file_content;

  while(my_read >> file_content){
    cout << file_content << endl;
  }
  my_read.close();


  return 0;
}
