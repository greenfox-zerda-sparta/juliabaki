#ifndef _TEST
#include <iostream>
#include "binary_search.h"

int main() {
  std::vector<int> test_input;
  for (int i = 0; i < 100; i++) {
    test_input.push_back(i);
  }

  std::cout << binary_search(test_input, 3) << std::endl;
  return 0;
}

#endif