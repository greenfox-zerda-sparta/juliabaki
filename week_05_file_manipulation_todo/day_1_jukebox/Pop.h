#include "Song.h"
#include <string>
#include <iostream>

using namespace std;

#ifndef POP_H_
#define POP_H_

class Pop: public Song {
public:
  Pop(string artist_of_song, string title);
  ~Pop();
  bool addRating(unsigned int rating);
};

#endif /* POP_H_ */
