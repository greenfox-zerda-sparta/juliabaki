
#ifndef SECRETNUMBER_H_
#define SECRETNUMBER_H_

#include <vector>
#include <iostream>

class SecretNumber {
public:
  std::vector<int>vector;
  SecretNumber();
  ~SecretNumber();
  void generateSecretNumberWithoutRepeating();
};

#endif /* SECRETNUMBER_H_ */
