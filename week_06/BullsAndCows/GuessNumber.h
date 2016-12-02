
#ifndef GUESSNUMBER_H_
#define GUESSNUMBER_H_

#include <vector>
#include <iostream>

class GuessNumber {
public:
  std::vector<int>vector;
  GuessNumber();
  ~GuessNumber();
  void printVector();
  void setGuessNumber(int guess_number);
  bool hasRepeatingNumber();
};

#endif /* GUESSNUMBER_H_ */
