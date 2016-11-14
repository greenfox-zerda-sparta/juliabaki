#include <string>
using namespace std;

#ifndef SONG_H_
#define SONG_H_

class Song {
public:
  Song(string artist_of_song, string title);
  virtual ~Song();
  string getName();
  virtual bool addRating(unsigned int rating);
  int getAverageRating();
protected:
  string title;
  string artist_of_song;
  string genre;
  unsigned int sum_rating;
  unsigned int rating_counter;
};

#endif /* SONG_H_ */
