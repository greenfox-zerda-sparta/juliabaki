#include <iostream>
#include <string>

using namespace std;

template<class TYPE>
void make_descending_order(TYPE* array, int length) {
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      if (array[i] > array[j]) {
        int temp;
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}

template<class TYPE_2>
void print_elements(TYPE_2* array, int length) {
  for (int i = 0; i < length; i++) {
    cout << array[i] << endl;
  }
}

int main() {
  // create a function template that takes an array and sort it in a descending order
  int array[5] = {1, 2, 3, 4, 5};
  make_descending_order(array, 5);
  print_elements(array, 5);
  return 0;
}
