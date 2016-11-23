//============================================================================
// Name        : exercise_09.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {
    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades
  Student student_1;
  student_1.add_grade(5);
  student_1.add_grade(6);
  student_1.add_grade(1);

  cout << student_1.get_average();

  return 0;
}
