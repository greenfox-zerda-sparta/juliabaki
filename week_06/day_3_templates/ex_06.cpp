#include <iostream>
#include <string>

using namespace std;

template <class TYPE_1>
double get_sum_of_elements(TYPE_1* array, int length){
  int sum_of_elements = 0;
  for(int i = 0; i < length; i++){
    sum_of_elements += array[i];
  }
  return sum_of_elements;
}
template <>
double get_sum_of_elements<char>(char* array, int length){
  int sum_of_elements = 0;
  for(int i = 0; i < length; i++){
     sum_of_elements += (int)array[i];
   }
  return sum_of_elements;
}

int main() {
  // Create a function template that takes an array, and its length and return the sum of his elements
  // Create a template specialization for char types, that it returns the sum of the characters integer position in the alphabet

  int array[5] = {1, 2, 3, 4, 5};
  cout << get_sum_of_elements(array, 5) << endl;

  char karcsi_array[5] = {'h', 'a', 'r', 'o', 'm'};
  cout << get_sum_of_elements(karcsi_array, 5) << endl;

  return 0;
}
