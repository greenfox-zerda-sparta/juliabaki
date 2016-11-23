#include "Rock.h"

Rock::Rock(string artist_of_song, string title) : Song(artist_of_song, title) {
  this->genre = "Rock";
}

Rock::~Rock() {}

bool Rock::addRating(unsigned int rating) {
  bool result = false;
  if (rating > 1 && rating <= 5) {
    result = true;
    this->sum_rating += rating;
    rating_counter++;
  }
  return result;
}
