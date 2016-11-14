#include "Song.h"

#ifndef RAGGEASONG_H_
#define RAGGEASONG_H_

class ReggaeSong: public Song {
public:
  ReggaeSong(string artist_of_song, string title);
  ~ReggaeSong();
};

#endif /* RAGGEASONG_H_ */
