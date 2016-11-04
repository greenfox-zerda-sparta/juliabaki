//============================================================================
// Name        : optimized_stack.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

struct Stack {
  double* elements;
  int size;
  int current_size;
};

Stack* stack_construct(double input[], int size) {
  Stack* new_stack = new Stack;
  int optimal_size = pow(2, sqrt(size * 2) + 1);
  new_stack->elements = new double[optimal_size];
  for (int i = 0; i < size; i++) {
    new_stack->elements[i] = input[i];
  }
  new_stack->size = size;
  new_stack->current_size = optimal_size;
  return new_stack;
}

void stack_push(Stack& stack, double value) {
  stack.size += 1;
  if(stack.size >= stack.current_size * 0.80){
    stack.current_size *= 2;
    double* incremented_elements = new double[stack.current_size];
    for (int i = 0; i < stack.size - 1; i++) {
        incremented_elements[i] = stack.elements[i];
    }
    delete[] stack.elements;
    stack.elements = incremented_elements;
  }
  stack.elements[stack.size - 1] = value;
}

double stack_pop(Stack& stack) {
  double last_push = stack.elements[stack.size - 1];
  stack.size -= 1;

  return last_push;
}

void print_stack(Stack* stack) {
  for (int i = 0; i < stack->size; i++) {
    cout << stack->elements[i] << endl;
  }
}

int main() {
  double array_1[] = { 1, 2, 3 };

  Stack* stack_4 = stack_construct(array_1, 3);
  print_stack(stack_4);

  stack_push(*stack_4, 6);
  print_stack(stack_4);

  cout << stack_pop(*stack_4);

  delete[] stack_4->elements;
  delete stack_4;
  stack_4 = nullptr;
  return 0;
}
