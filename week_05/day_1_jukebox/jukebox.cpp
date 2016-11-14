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
