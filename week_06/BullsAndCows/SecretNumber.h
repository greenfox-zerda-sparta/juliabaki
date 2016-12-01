
#ifndef SECRETNUMBER_H_
#define SECRETNUMBER_H_

#include <vector>
#include <iostream>

class SecretNumber {
public:
  std::vector<int>secret_number;
  SecretNumber();
  ~SecretNumber();
  void printVector();
  void generateSecretNumber();
};

#endif /* SECRETNUMBER_H_ */
