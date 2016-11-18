#include "TodoList.h"

TodoList::TodoList() {
  this->todo_file = "todo_list.txt";
  this->todo_counter = task_counter();
  this->todo_tasks = NULL;
  this->read_from_file();
}

TodoList::~TodoList() {
  this->save_to_file();
  delete[] todo_tasks;
}

bool TodoList::is_exists(string todo_file) {
  ifstream file(todo_file);
  if (!file.is_open()) {
    ofstream new_file(todo_file);
    new_file.close();
  }
  file.close();
  return true;
}

void TodoList::read_from_file() {
  if (is_exists(todo_file)) {
    Task** temp = new Task*[todo_counter];
    string content;
    ifstream file("todo_list.txt");
    int i = 0;
    while (getline(file, content)) {
      Task* new_todo_task = new Task(content);
      temp[i] = new_todo_task;
      i++;
    }
    delete[] todo_tasks;
    todo_tasks = temp;
    file.close();
  }
}

int TodoList::task_counter() {
  todo_counter = 0;
  if (is_exists(todo_file)) {
    ifstream file;
    string content;
    file.open(todo_file);
    while (getline(file, content)) {
      todo_counter++;
    }
    file.close();
  } else {
    cerr << "No file";
  }
  return todo_counter;
}

void TodoList::save_to_file() {
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

bool TodoList::is_list_empty() {
  if (todo_counter == 0) {
    return true;
  }
  return false;
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

// TaskVector

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

void TodoList::add_new_task(string new_task_content) {
  Task** temp = new Task*[todo_counter + 1];
  Task* new_todo_task = new Task(new_task_content);
  for (int i = 0; i < todo_counter; i++) {
    temp[i] = todo_tasks[i];
  }
  temp[todo_counter] = new_todo_task;
  delete[] todo_tasks;
  todo_tasks = temp;
  todo_counter++;
}

void TodoList::remove_task(int index) {
  if (!is_list_empty()) {
    if (index > todo_counter || index < 1) {
      cerr << "Unable to remove: Index is out of bound" << endl;
    } else {
      Task** temp = new Task*[todo_counter - 1];
      for (int i = 0; i < index - 1; i++) {
        temp[i] = todo_tasks[i];
      }
      for(int j = index - 1; j < todo_counter; j++){
        temp[j] = todo_tasks[j + 1];
      }
      delete[] todo_tasks;
      todo_tasks = temp;
      todo_counter--;
    }
  } else {
    cerr << "Your list is empty, can't remove anything." << endl;
  }
}

/*
 void TodoList::print_array() {
 for (int i = 0; i < todo_counter; i++) {
 cout << todo_tasks[i]->content << endl;
 }
 }
 */
