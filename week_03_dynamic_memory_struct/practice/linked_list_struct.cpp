//============================================================================
// Name        : linked_list_struct.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Node{
  double value;
  Node* next;
};

Node* list_construct_one(double value);
unsigned int list_length(Node& head);
//Node* list_get_last(Node& head);
void list_append(Node& head, double value);
void print_list(Node& head);

int main() {
  Node* node_one = list_construct_one(5);
  //cout << node_one->value << endl;
  print_list(*node_one);
  cout << list_length(*node_one) << endl;
  list_append(*node_one, 6);
  //cout << node_one->next->value << endl;
  print_list(*node_one);
  cout << list_length(*node_one) << endl;
  list_append(*node_one, 7);
  print_list(*node_one);
  cout << list_length(*node_one) << endl;
  delete node_one;
	return 0;
}

void print_list(Node& head) {
  Node* current = &head;
  while (current != nullptr) {
    cout << current->value << " ";
    current = current->next;
  }
  cout << endl;
}

Node* list_construct_one(double value){
  Node* new_node = new Node;
  new_node->value = value;
  new_node->next = nullptr;
  return new_node;
}

unsigned int list_length(Node& head){
  unsigned int list_length;
  Node* current = &head;
  while (current != nullptr) {
    list_length++;
    current = current->next;
  }
  return list_length;
}

void list_append(Node& head, double value){
  Node* current = &head;
  Node* new_element = list_construct_one(value);
  while (current->next != nullptr) {
    current = current->next;
  }
  current->next = new_element;
}
