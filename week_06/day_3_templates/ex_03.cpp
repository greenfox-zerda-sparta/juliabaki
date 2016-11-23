#include <iostream>
#include <string>

using namespace std;

template <class TYPE>
void print_elements(TYPE* array, TYPE length){
  for(int i = 0; i < length; i++){
    cout << array[i] << endl;
  }
}

int main() {
  // create a function template which takes in an array, and the size of it
  // print all the elements of the array

  int array[5] = {1, 2, 3, 4, 5};
  print_elements(array, 5);

  return 0;
}
