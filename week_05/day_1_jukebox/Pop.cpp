#include "Pop.h"

using namespace std;

Pop::Pop(string artist_of_song, string title) : Song(artist_of_song, title) {
  this->genre = "Pop";
}

Pop::~Pop() {}

bool Pop::addRating(unsigned int rating) {
  bool result = false;
  if (rating >= 1 && rating <= 5) {
    result = true;
    this->sum_rating += rating;
    rating_counter++;
  }
  return result;
}
