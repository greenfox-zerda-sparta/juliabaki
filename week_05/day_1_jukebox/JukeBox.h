#include "Song.h"
#include "Pop.h"
#include "ReggaeSong.h"
#include "Rock.h"

#ifndef JUKEBOX_H_
#define JUKEBOX_H_

class JukeBox {
public:
  JukeBox();
  virtual ~JukeBox();
  void addSong(Song& song);
  void getEverySong();
  void songRate(string artist_of_song, string title, unsigned int rate);
  float getAverageSongRating(string artist_of_song);
  float getGenreRating(string genre);
  string getTopRatedSong();
  string getTopRatedGenre();
private:
  Song** songs;
  unsigned int song_counter;
};

#endif /* JUKEBOX_H_ */
