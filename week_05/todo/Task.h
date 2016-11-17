#include <string>
#include <fstream>

using namespace std;

#ifndef TASK_H_
#define TASK_H_

class Task {
public:
  Task(string content);
  ~Task();
  string content;
};

#endif /* TASK_H_ */
