/*
 * Student.h
 *
 *  Created on: 2016 nov. 8
 *      Author: juli
 */
#include <iostream>
#include <string>
using namespace std;

#ifndef STUDENT_H_
#define STUDENT_H_

class Student {
public:
  Student();
  ~Student();
  void add_grade(int input);
  double get_average();
private:
  int* array_of_grades;
  int length;
};

#endif /* STUDENT_H_ */
