#include "Song.h"

#ifndef ROCK_H_
#define ROCK_H_

class Rock: public Song {
public:
  Rock(string artist_of_song, string title);
  ~Rock();
};

#endif /* ROCK_H_ */
