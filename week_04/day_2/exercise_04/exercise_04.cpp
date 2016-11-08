//============================================================================
// Name        : exercise_04.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

class Student {
  private:
    string name;
    unsigned int age;
  public:
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }

    string greet() {
      return "Hello my name is: " + this->name;
    }

    void change_name(string input_name){
      name = input_name;
    }

    string print_name(){
     return name;
    }
};

int main() {
  // Create a method on student that takes a string as an argument and
  // changes it's name property

  Student student_1("John", 21);
  student_1.change_name("Rob");
  cout << student_1.print_name();

  return 0;
}
