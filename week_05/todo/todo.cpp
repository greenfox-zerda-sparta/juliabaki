#include "TodoList.h"


int main(int argc, char* argv[]) {
  TodoList list;

  char command_l[] = "-l";
  char command_a[] = "-a";
  char command_r[] = "-r";
  //char command_c[] = "-c";


  // ./todo

  if (argc == 1) {
    cout << list.print_usage();
  }

  // ./todo -l, -a, -r

  if ((argc == 2 && argv[1][1] == command_l[1])) {
    if (list.is_list_empty()) {
      cout << endl << "No todos for today :)" << endl;
    } else {
      cout << list.print_todos_list();
    }
  } else if (argc == 2 && argv[1][1] == command_a[1]) {
    cerr << "Unable to add: No task is provided." << endl;
  } else if (argc == 2 && argv[1][1] == command_r[1]){
    cerr << "Unable to remove: No index is provided" << endl;
  }

  // ./todo -a "..."

  if ((argc == 3 && argv[1][1] == command_a[1])) {
    string new_task_content = argv[2];
    list.add_new_task(new_task_content);
  }

  // .todo -r int

  if((argc == 3 && argv[1][1] == command_r[1])){
    char* index_string = argv[2];
    int index = atoi(index_string);
    list.remove_task(index);
  }

  return 0;
}
