/*
 * Student.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: juli
 */

#include "Student.h"

Student::Student(){
  length = 0;
  array_of_grades = new int[0];
}

void Student::add_grade(int input){
    if(input >= 1 && input <= 5){
      int* temp = new int[length + 1];
      for(int i = 0; i < length; i++){
        temp[i] = array_of_grades[i];
      }
      temp[length] = input;
      delete[] array_of_grades;
      array_of_grades = temp;
      length++;
    } else {
      cout << "This is not a grade. It should be between 1 and 5." << endl;
    }
}

double Student::get_average(){
  int sum =  0;
  for (int i = 0; i < length; i++){
    sum += array_of_grades[i];
  }
  return sum/length;
}

Student::~Student(){}
