#include "JukeBox.h"

JukeBox::JukeBox() {
  this->songs = nullptr;
  this->song_counter = 0;
}

JukeBox::~JukeBox() {}

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

void JukeBox::getEverySong(){
  for(unsigned int i = 0; i < song_counter; i++){
    cout << songs[i]->getName() << std::endl;
  }
}

void JukeBox::songRate(string artist_of_song, string title, unsigned int rate){
  for(unsigned int i = 0; i < song_counter; i++){
    if(artist_of_song == songs[i]->artist_of_song && title == songs[i]->title){
      songs[i]->addRating(rate);
      cout << "Average rating of " << songs[i]->getName() << " is: " << songs[i]->getAverageRating();
    }
  }
}

float JukeBox::getAverageSongRating(string artist_of_song){
  int sum_averageSongRating = 0;
  int counter = 0;
  for(unsigned int i = 0; i < song_counter; i++){
    if(artist_of_song == songs[i]->artist_of_song){
      sum_averageSongRating += songs[i]->getAverageRating();
      counter++;
    }
  }
  float averageSongRating = sum_averageSongRating / counter;
  return averageSongRating;
}

float JukeBox::getGenreRating(string genre){
  float sumGenreRating = 0;
  int counter = 0;
  for(unsigned int i = 0; i < song_counter; i++){
    if(genre == songs[i]->genre){
      sumGenreRating += songs[i]->getAverageRating();
      counter++;
    }
  }
  float genreRating = sumGenreRating / counter;
  return genreRating;
}
