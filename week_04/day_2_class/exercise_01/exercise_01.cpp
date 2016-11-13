//============================================================================
// Name        : exercise_01.cpp
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
};

int main() {
  // Create a new instance of the Student class and set it's name to "John" and
  // it's age to 21

  Student student_1;
  student_1.name = "John";
  student_1.age = 21;

  cout << "Student's name: " << student_1.name << endl << "Student's age: " << student_1.age;

  return 0;
}
