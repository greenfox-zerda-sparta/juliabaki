
#include "MyClass.h"

MyClass::MyClass() {}

MyClass::~MyClass() {}

int MyClass::get_sum_of_vector_elements(std::vector<int>& vector){
  int sum_of_elements = 0;
  for(unsigned int i = 0; i < vector.size(); i++){
    sum_of_elements += vector[i];
  }
  return sum_of_elements;
}
