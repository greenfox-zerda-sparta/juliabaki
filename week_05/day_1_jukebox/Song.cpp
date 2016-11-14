#include "Song.h"

Song::Song(string artist_of_song, string title) {
  this->artist_of_song = artist_of_song;
  this->title = title;
  this->genre = "";
  this->sum_rating = 0;
  this->rating_counter = 0;
}

Song::~Song() {}

string Song::getName() {
  return artist_of_song + ": " + title + " Genre: " + genre;
}

int Song::getAverageRating() {
  int averageRating = 0;
  if(sum_rating == 0 || rating_counter == 0){
    averageRating = -1;
  } else {
      averageRating = sum_rating / rating_counter;
  }
  return averageRating;
}
