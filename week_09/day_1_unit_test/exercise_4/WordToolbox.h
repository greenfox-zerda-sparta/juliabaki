
#ifndef WORDTOOLBOX_H_
#define WORDTOOLBOX_H_

#include <string>

class WordToolbox {
private:
  std::string stringHeld;
public:
  WordToolbox(std::string stringHeld);
  ~WordToolbox();

  std::string getStringHeld();
  void setStringHeld(std::string stringHeld);

  bool isAnAnagram(std::string stringToCheck);
  int countHowMany(char charToFind);
};

#endif /* WORDTOOLBOX_H_ */
