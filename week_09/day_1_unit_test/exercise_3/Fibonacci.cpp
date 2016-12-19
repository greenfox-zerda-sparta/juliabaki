
#include "Fibonacci.h"

Fibonacci::Fibonacci() {}

Fibonacci::~Fibonacci() {}

int Fibonacci::get_fibonacci_by_index(int index){
  if(index < 0){
    throw "wrong index";
  }

  if(index == 0) {
     return 0;
   }
   if (index == 1){
     return 1;
   }
  return get_fibonacci_by_index(index - 2) + get_fibonacci_by_index(index - 1);
}
