#include <iostream>
#include <string>

using namespace std;

template <class TYPE_1, class TYPE_2>
void print_more_bytes(TYPE_1 first, TYPE_2 second){
  if(sizeof(first) > sizeof(second)){
    cout << first << " has more bytes: " << sizeof(first);
  } else {
    cout << second << " has more bytes: " << sizeof(second);
  }
}

int main() {
  //Create a function template that takes 2 different typenames, and prints out
  //which one is stored in more bytes from then

  print_more_bytes(3, "három");

  return 0;
}
