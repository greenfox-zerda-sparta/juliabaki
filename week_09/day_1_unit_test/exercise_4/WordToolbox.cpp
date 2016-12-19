
#include "WordToolbox.h"
#include <algorithm>

WordToolbox::WordToolbox(std::string stringHeld) {
  this->stringHeld = stringHeld;
}

WordToolbox::~WordToolbox() {}

std::string WordToolbox::getStringHeld(){
  return stringHeld;
}

void WordToolbox::setStringHeld(std::string stringHeld){
  this->stringHeld = stringHeld;
}

int WordToolbox::countHowMany(char charToFind){
  int result = 0;
  std::transform(stringHeld.begin(), stringHeld.end(), stringHeld.begin(), tolower);
  for(std::string::iterator it = stringHeld.begin(); it != stringHeld.end(); it++){
    if(*it == tolower(charToFind)){
      result++;
    }
  }
  return result;
}

bool WordToolbox::isAnAnagram(std::string stringToCheck){
  bool result = false;
  sort( stringToCheck.begin(), stringToCheck.end() );
  sort( stringHeld.begin(), stringHeld.end() );
  if(stringToCheck == stringHeld){
    result = true;
  }
  return result;
}
