#include <iostream>
#include <string>

using namespace std;

template <class TYPE>
TYPE add_first_to_third(TYPE array[5]){
  TYPE sum = array[0] + array[2];
  return sum;
}

int main() {
  // create a function template that takes fix long array
  // and add the 1st element of it to the third

  int array[5] = {1, 2, 3, 4, 5};
  cout << add_first_to_third(array);

  return 0;
}
