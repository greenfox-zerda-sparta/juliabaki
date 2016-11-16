#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>

using namespace std;

#ifndef TODOLIST_H_
#define TODOLIST_H_

class TodoList {
public:
  TodoList();
  virtual ~TodoList();
  bool is_list_empty();
  string print_todos_list();
  string print_usage();
  void add_new_task(string new_task);
  int task_counter();
  int todo_counter;

};

#endif /* TODOLIST_H_ */
