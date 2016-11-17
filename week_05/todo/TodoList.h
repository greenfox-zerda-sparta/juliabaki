#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include "Task.h"

using namespace std;

#ifndef TODOLIST_H_
#define TODOLIST_H_

class TodoList {
public:
  TodoList();
  virtual ~TodoList();
  bool is_list_empty();
  string print_todos_list();
  string print_list();

  string print_usage();
  void append_new_task(string new_task);
  void add_new_task_to_file(string new_task_content);

private:
  Task** todo_tasks;
  int todo_counter;
  string todo_file;

};

#endif /* TODOLIST_H_ */
