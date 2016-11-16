#include "TodoList.h"

TodoList::TodoList() {
  this->todo_counter = 0;
}

TodoList::~TodoList() {
  ofstream new_todo_list;
  new_todo_list.open("new_todo_list.txt");
  new_todo_list.close();
}

bool TodoList::is_list_empty() {
  ifstream file;
  string content;
  int temp_todo_counter;
  file.open("../new_todo_list.txt");
  while(getline(file, content)){
    temp_todo_counter++;
  }
  file.close();
  if (temp_todo_counter == 0) {
    return true;
  }
  return false;
}

int TodoList::task_counter(){
  ifstream file;
  string content;
  file.open("../new_todo_list.txt");
  while(getline(file, content)){
    todo_counter++;
  }
  file.close();
  return todo_counter;
}

string TodoList::print_todos_list() {
  ifstream todo_list;
  todo_list.open("../new_todo_list.txt");
  string temp_content;
  string content;
  int task_counter = 1;
  if (todo_list.is_open()) {
    while (getline(todo_list, temp_content)) {
      content += '\n' + to_string(task_counter) + " - " + temp_content + '\n';
      task_counter++;
    }
  } else {
    cerr << "Could not open the todo list file." << endl;
  }
  todo_list.close();
  return content;
}

string TodoList::print_usage() {
  ifstream file;
  file.open("../usage.txt");
  string temp_content;
  string content;
  if (file.is_open()) {
    while (getline(file, temp_content)) {
      content += temp_content + '\n';
    }
    content += '\n';
  } else {
    cerr << "Could not open the file." << endl;
  }
  file.close();
  return content;
}

void TodoList::add_new_task(string new_task) {
  todo_counter = task_counter();
  if (is_list_empty()) {
    ofstream new_todo_list;
    new_todo_list.open("../new_todo_list.txt");
    if (new_todo_list.is_open()) {
      new_todo_list << new_task;
    }
    new_todo_list.close();
  } else {
    string temp_content;
    string content;
    ifstream old_todo_list;
    old_todo_list.open("../new_todo_list.txt");
    if (old_todo_list.is_open()) {
      while(getline(old_todo_list, temp_content)){
        content += temp_content + '\n';
      }
    }
    old_todo_list.close();

    content += new_task;

    ofstream new_todo_list;
    new_todo_list.open("../new_todo_list.txt");
    if (new_todo_list.is_open()) {
      new_todo_list << content;
    }
    new_todo_list.close();
  }
}
