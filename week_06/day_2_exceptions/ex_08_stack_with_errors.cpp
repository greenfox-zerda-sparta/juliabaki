#include <iostream>
#include <string>
using namespace std;

// Create a fixed size stack. The stack can contain only 5 elements.
// You can push on the stack and pop from the stack.
// Write the push and pop methods so, that each throws an integer value if there is an error.
// Like when the stack is empty or full. Just make sure those are different values.
// Write a method called string interpretException(int exception) that returns the error message string for the integer.
//
// Illustrate in the main function both when it works fine and when exceptions occur.

string interpretExeption(int exception) {
  switch (exception) {
  case -1:
    return "The stack is full.";
  case 1:
    return "The stack is empty.";
  }
  return "general error";
}

class Stack {
private:
  int* array_of_elements;
  int number_of_elements;
  int max_size;
public:
  Stack();
  ~Stack();
  void push(int input) throw (int);
  int pop() throw (int);
  string interpretExeption(int exception);
  void print_array();
};

Stack::Stack() {
  this->array_of_elements = nullptr;
  this->number_of_elements = 0;
  this->max_size = 5;
}

Stack::~Stack(){
  delete[] array_of_elements;
  array_of_elements = nullptr;
}

void Stack::push(int input) throw (int) {
  if (number_of_elements == max_size) {
    throw -1;
  }
  int* temp = new int[number_of_elements + 1];
  for(int i = 0; i < number_of_elements; i++){
    temp[i] = array_of_elements[i];
  }
  temp[number_of_elements] = input;
  array_of_elements = temp;
  number_of_elements++;
}

int Stack::pop() throw (int) {
  if (number_of_elements == 0) {
    throw 1;
  }
  int top_element = array_of_elements[number_of_elements - 1];
  number_of_elements--;
  return top_element;
}

void Stack::print_array() {
  for (int i = 0; i < number_of_elements; i++) {
    cout << array_of_elements[i] << endl;
  }
}

int main() {
  try {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.print_array();
    stack.push(6);
  } catch (int error) {
    cout << "Error: " << interpretExeption(error) << endl;
  }

  try{
    Stack stack_1;
    cout << stack_1.pop();
  }catch(int exp){
    cout << "Error: " << interpretExeption(exp) << endl;
  }

  return 0;
}
