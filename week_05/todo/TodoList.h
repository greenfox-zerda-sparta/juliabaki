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

  bool is_exists(string todo_file);
  void save_to_file();
  void read_from_file();
  int task_counter();

  bool is_list_empty();

  string print_todos_list();
  string print_usage();

  void add_new_task(string new_task);
  void remove_task(int index);

  void print_array();

private:
  Task** todo_tasks;
  int todo_counter;
  string todo_file;
};

#endif /* TODOLIST_H_ */
