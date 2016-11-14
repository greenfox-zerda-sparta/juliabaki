#include "Pop.h"

using namespace std;

Pop::Pop(string artist_of_song, string title) : Song(artist_of_song, title) {
  this->genre = "Pop";
}

Pop::~Pop() {}

