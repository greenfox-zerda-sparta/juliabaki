/*
 * Stack.h
 *
 *  Created on: 2016 nov. 8
 *      Author: juli
 */
#include <iostream>
#include <string>

using namespace std;

#ifndef STACK_H_
#define STACK_H_

class Stack {
public:
  Stack(int input_length, int* input_array);
  ~Stack();
  int size();
  void push(int input);
  int pop();
  void print_stack();
private:
  int number_of_elements;
  int* array;
};

#endif /* STACK_H_ */
