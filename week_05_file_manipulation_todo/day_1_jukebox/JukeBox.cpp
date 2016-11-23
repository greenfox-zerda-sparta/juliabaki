#include "JukeBox.h"

JukeBox::JukeBox() {
  this->songs = nullptr;
  this->song_counter = 0;
}

JukeBox::~JukeBox() {
  delete[] songs;
}

void JukeBox::addSong(Song& song) {
  Song** temp = new Song*[song_counter + 1];
  if (songs != nullptr) {
    for (unsigned int i = 0; i < song_counter; ++i) {
      temp[i] = songs[i];
    }
  }
  temp[song_counter] = &song;
  delete[] songs;
  songs = temp;
  ++song_counter;
}

void JukeBox::printEverySong(){
  for(unsigned int i = 0; i < song_counter; i++){
    cout << songs[i]->getName() << std::endl;
  }
}

void JukeBox::addSongRating(string artist_of_song, string title, unsigned int rating){
  for(unsigned int i = 0; i < song_counter; i++){
    if(artist_of_song == songs[i]->artist_of_song && title == songs[i]->title){
      songs[i]->addRating(rating);
    }
  }
}

float JukeBox::getAverageArtistRating(string artist_of_song){
  int sum_artist_rating = 0;
  int counter = 0;
  for(unsigned int i = 0; i < song_counter; i++){
    if(artist_of_song == songs[i]->artist_of_song){
      sum_artist_rating += songs[i]->getAverageRating();
      counter++;
    }
  }
  return sum_artist_rating / counter;
}

float JukeBox::getGenreRating(string genre){
  float sum_genre_rating = 0;
  int counter = 0;
  for(unsigned int i = 0; i < song_counter; i++){
    if(genre == songs[i]->genre){
      sum_genre_rating += songs[i]->getAverageRating();
      counter++;
    }
  }
  return sum_genre_rating / counter;
}

string JukeBox::getTopRatedSong(){
  int top_rated_song_index = 0;
  for(unsigned int i = 1; i < song_counter; i++){
    if(songs[top_rated_song_index]->getAverageRating() < songs[i]->getAverageRating()){
      top_rated_song_index = i;
    }
  }
  return songs[top_rated_song_index]->title;
}

string JukeBox::getTopRatedGenre(){
  string genres[3] = {"Pop", "Reggae", "Rock"};
  int top_rated_genre = 0;
  for(int i = 1; i < 3; i++){
    if(getGenreRating(genres[i]) > getGenreRating(genres[top_rated_genre])){
      top_rated_genre = i;
    }
  }
  return genres[top_rated_genre];
}
