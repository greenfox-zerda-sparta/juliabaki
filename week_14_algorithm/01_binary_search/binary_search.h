#pragma once
#include <vector>

bool binary_search(std::vector<int>& input_vector, int number) {
  bool result = false;
  int min = 0;
  int max = input_vector.size() - 1;
  int guess_index;
  while (min <= max) {
    guess_index = (min + max) / 2;
    if (input_vector[guess_index] > number) {
      max = guess_index - 1;
    } else if (input_vector[guess_index] < number) {
      min = guess_index + 1;
    } else {
      return true;
    }
  }
  return result;
}