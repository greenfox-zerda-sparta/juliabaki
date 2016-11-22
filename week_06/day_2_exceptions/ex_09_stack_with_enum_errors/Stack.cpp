
#include "Stack.h"
#include <iostream>

Stack::Stack() {
  this->array_of_elements = nullptr;
  this->number_of_elements = 0;
  this->max_size = 5;
}

Stack::~Stack(){
  delete[] array_of_elements;
  array_of_elements = nullptr;
}

void Stack::push(int input) throw (Errors) {
  if (number_of_elements == max_size) {
    throw FULL;
  }
  int* temp = new int[number_of_elements + 1];
  for(int i = 0; i < number_of_elements; i++){
    temp[i] = array_of_elements[i];
  }
  temp[number_of_elements] = input;
  array_of_elements = temp;
  number_of_elements++;
}

int Stack::pop() throw (Errors) {
  if (number_of_elements == 0) {
    throw EMPTY;
  }
  int top_element = array_of_elements[number_of_elements - 1];
  number_of_elements--;
  return top_element;
}

std::string Stack::interpretException(Errors exception) {
  switch (exception) {
  case FULL:
    return "The stack is full.";
  case EMPTY:
    return "The stack is empty.";
  }
  return "general error";
}

void Stack::print_array() {
  for (int i = 0; i < number_of_elements; i++) {
    std::cout << array_of_elements[i] << std::endl;
  }
}
