#include "TodoList.h"

TodoList::TodoList() {
  this->todo_counter = task_counter();
  this->todo_tasks = NULL;
  this->todo_file = "todo_list.txt";
}

TodoList::~TodoList() {
  delete[] todo_tasks;
  todo_tasks = NULL;
}

bool TodoList::is_list_empty() {
  ifstream file;
  string content;
  int temp_todo_counter;
  file.open(todo_file);
  while (getline(file, content)) {
    temp_todo_counter++;
  }
  file.close();
  if (temp_todo_counter == 0) {
    return true;
  }
  return false;
}

int TodoList::task_counter() {
  ifstream file;
  string content;
  file.open(todo_file);
  while (getline(file, content)) {
    todo_counter++;
  }
  file.close();
  return todo_counter;
}

string TodoList::print_todos_list() {
  ifstream todo_list;
  todo_list.open(todo_file);
  string temp_content;
  string content;
  int task_counter = 1;
  if (todo_list.is_open()) {
    while (getline(todo_list, temp_content)) {
      content += to_string(task_counter) + " - " + temp_content + '\n';
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
  file.open("usage.txt");
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

void TodoList::append_new_task(string new_task_content) {
  todo_counter = task_counter();
  Task** temp = new Task*[todo_counter + 1];
  Task* new_todo_task = new Task(new_task_content);
  if (todo_tasks != NULL) {
    for (int i = 0; i < todo_counter; i++) {
      temp[i] = todo_tasks[i];
    }
  }
  temp[todo_counter] = new_todo_task;
  delete[] todo_tasks;
  todo_tasks = temp;
  todo_counter++;
}

void TodoList::add_new_task_to_file(string new_task_content) {
  ofstream log(todo_file, ios_base::app | ios_base::out);
  log << new_task_content << '\n';
}

//http://www.cplusplus.com/reference/fstream/fstream/open/

void TodoList::remove_task(int index) {
  todo_counter = task_counter();
  task_file_to_array();
  if (todo_counter > 0) {
    Task** temp = new Task*[todo_counter - 1];
    if (todo_tasks != NULL) {
      cout << "benne vagyok az ifben" << endl;
      for (int i = 0; i < index; i++) {
        temp[i] = todo_tasks[i];
      }
      cout << "lemásoltam" << endl;
      for (int j = index; j < todo_counter; j++) {
        temp[j] = todo_tasks[j + 1];
      }
      cout << "lemásoltam a maradékot" << endl;
      delete[] todo_tasks;
      cout << "töröltem" << endl;
      todo_tasks = temp;
      todo_counter--;
      cout << todo_counter << endl;
      for (int i = 0; i < todo_counter; i++) {
        cout << todo_tasks[i]->content << endl;
      }
      task_array_to_file();
    }
  }
}

void TodoList::task_array_to_file() {
  string content;
  for (int i = 0; i < todo_counter; i++) {
    content += todo_tasks[i]->content + '\n';
  }
  ofstream file;
  file.open(todo_file);
  if (file.is_open()) {
    file << content;
  }
  file.close();
}

void TodoList::task_file_to_array() {
  ifstream file;
  string content;
  file.open(todo_file);
  while (getline(file, content)) {
    Task* new_todo_task = new Task(content);
  }
  file.close();
}
