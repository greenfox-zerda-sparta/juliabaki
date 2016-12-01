
#ifndef GUESSNUMBER_H_
#define GUESSNUMBER_H_

#include <vector>
#include <iostream>

class GuessNumber {
public:
  std::vector<int>guess_number_vector;
  GuessNumber();
  ~GuessNumber();
  void printVector();
  void setGuessNumber(int guess_number);
};

#endif /* GUESSNUMBER_H_ */
