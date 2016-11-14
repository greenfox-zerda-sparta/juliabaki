#include "Song.h"

Song::Song(string artist_of_song, string title) {
  this->artist_of_song = artist_of_song;
  this->title = title;
  this->genre = "";
  this->sum_rating = 0;
  this->rating_counter = 0;
}

Song::~Song() {
}

string Song::getName() {
  return artist_of_song + ": " + title + " Genre: " + genre;
}

bool Song::addRating(unsigned int rating) {
  bool result = false;
  if (rating >= 1 && rating <= 5) {
    result = true;
    this->sum_rating += rating;
    rating_counter++;
  }
  return result;
}

int Song::getAverageRating(){
  return sum_rating / rating_counter;
}
