
#ifndef STACK_H_
#define STACK_H_

#include <string>

enum Errors {FULL, EMPTY};

class Stack {
private:
  int* array_of_elements;
  int number_of_elements;
  int max_size;
public:
  Stack();
  ~Stack();
  void push(int input) throw (Errors);
  int pop() throw (Errors);
  std::string interpretException(Errors exception);
  void print_array();
};

#endif /* STACK_H_ */
