//============================================================================
// Name        : stack.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Stack {
  double* elements;
  int size;
};

Stack* stack_construct(double* elements, int size) {
  Stack* new_stack = new Stack;
  new_stack->elements = new double[size];
  for (int i = 0; i < size; i++) {
    new_stack->elements[i] = elements[i];
  }
  new_stack->size = size;
  return new_stack;
}

void stack_push(Stack& stack, double value) {
  stack.size += 1;
  double* incremented_elements = new double[stack.size];
  for (int i = 0; i < stack.size - 1; i++) {
    incremented_elements[i] = stack.elements[i];
  }
  incremented_elements[stack.size - 1] = value;
  delete[] stack.elements;
  stack.elements = incremented_elements;
}

double stack_pop(Stack& stack) {
  double last_push = stack.elements[stack.size - 1];
  stack.size -= 1;
  double* decremented_elements = new double[stack.size];
  for (int i = 0; i < stack.size; i++) {
    decremented_elements[i] = stack.elements[i];
  }
  delete[] stack.elements;
  stack.elements = decremented_elements;
  return last_push;
}

bool is_stack_empty(Stack& stack) {
  bool result = false;
  if(stack.size > 0){
    result = true;
  }
  return result;
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

  stack_pop(*stack_4);
  print_stack(stack_4);

  cout << is_stack_empty(*stack_4);

  delete[] stack_4->elements;
  delete stack_4;
  stack_4 = nullptr;
  return 0;
}
