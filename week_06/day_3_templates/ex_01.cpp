#include <iostream>
#include <string>

using namespace std;

template <class TYPE>
void print_first_element(TYPE* array){
  cout << array[0] << endl;
}

int main() {
  // create a function template the takes in a fix long array and prints the 1st element of it

  int array[5] = {1, 2, 3, 4, 5};
  print_first_element(array);

  return 0;
}
