#include "TodoList.h"

TodoList::TodoList() {
  this->todo_file = "todo_list.txt";
  this->todo_counter = 0;
  this->todo_tasks = NULL;
  this->ensure_file();
  this->read_from_file();
}

TodoList::~TodoList() {
  this->save_to_file();
  delete[] todo_tasks;
}

void TodoList::ensure_file() {
  ifstream file(todo_file);
  if (!file.is_open()) {
    ofstream new_file(todo_file);
    new_file.close();
  }
  file.close();
}

void TodoList::read_from_file() {
  todo_counter = 0;
  Task** temp = new Task*[todo_counter];
  string content;
  ifstream file("todo_list.txt");
  while (getline(file, content)) {
    Task* new_todo_task = new Task(content);
    temp[todo_counter] = new_todo_task;
    todo_counter++;
  }
  delete[] todo_tasks;
  todo_tasks = temp;
  file.close();
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

bool TodoList::is_list_empty() {
  if (todo_counter == 0) {
    return true;
  }
  return false;
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
      for (int j = index - 1; j < todo_counter; j++) {
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

string TodoList::print_todos_list() {
  string tasks;
  for (int i = 0; i < todo_counter; i++) {
    cout << todo_tasks[i]->content + "\n";
  }
  return tasks;
}

