/*
 * Stack.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: juli
 */

#include "Stack.h"

Stack::Stack(int input_length, int* input_array) {
  this->number_of_elements = input_length;
  this->array = input_array;
}

Stack::~Stack() {}

int Stack::size(){
  return number_of_elements;
}

void Stack::push(int input){
  int* temp = new int[number_of_elements + 1];
  for(int i = 0; i < number_of_elements; i++) {
    temp[i] = array[i];
  }
  temp[number_of_elements] = input;
  array = temp;
  number_of_elements++;
}

int Stack::pop(){
  int top_element = array[number_of_elements - 1];
  int* temp = new int[number_of_elements - 1];
  for(int i = 0; i < number_of_elements; i++){
    temp[i] = array[i];
  }
  array = temp;
  number_of_elements--;
  return top_element;
}

void Stack::print_stack(){
  for(int i = 0; i < number_of_elements; i++){
    cout << array[i] << endl;
  }
}
