#include "Rock.h"

Rock::Rock(string artist_of_song, string title) : Song(artist_of_song, title) {
  this->genre = "Rock";
}

Rock::~Rock() {}

