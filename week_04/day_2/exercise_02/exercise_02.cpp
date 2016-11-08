//============================================================================
// Name        : exercise_02.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
};

int main() {
  // Create a new instance of the Student class and set it's name to "John" and
  // it's age to 21 with it's constructor

  Student student_1("John", 21);
  cout << "Student's name: " << student_1.name << endl << "Student's age: " << student_1.age;

  return 0;
}
