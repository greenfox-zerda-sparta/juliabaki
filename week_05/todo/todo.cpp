#include "TodoList.h"

int main(int argc, char* argv[]) {
  TodoList list;

  char command_l[] = "-l";
  char command_a[] = "-a";
  //char command_r[] = "-r";
  //char command_c[] = "-c";


  if (argc == 1) {
    cout << list.print_usage();
  }

  if ((argc == 2 && argv[1][1] == command_l[1])) {
    if (list.is_list_empty()) {
      cout << endl << "No todos for today :)" << endl;
    } else {
      cout << list.print_todos_list();
    }
  }

    if ((argc == 3 && argv[1][1] == command_a[1])) {
    string new_task = argv[2];
    list.add_new_task(new_task);
    cout << list.print_todos_list();
    }

  return 0;
}
