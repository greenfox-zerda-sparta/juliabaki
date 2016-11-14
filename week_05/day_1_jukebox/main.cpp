#include <iostream>
#include "Pop.h"
#include "ReggaeSong.h"
#include "Rock.h"
#include "JukeBox.h"
using namespace std;

int main() {
  Pop pop_song("Nia", "Fire");
  ReggaeSong reggae_song("Ria", "Soil");
  Rock rock_song("Sia", "Water");

  cout << pop_song.getName() << endl;
  cout << rock_song.getName() << endl;
  cout << reggae_song.getName() << endl;

  pop_song.addRating(1);
  cout << "Rating of the pop song: " << pop_song.getAverageRating() << endl;

  reggae_song.addRating(3);
  reggae_song.addRating(5);
  cout << "Rating of the reggae song: " << reggae_song.getAverageRating() << endl;

  rock_song.addRating(1);
  cout << "Rating of the rock song: " << rock_song.getAverageRating() << endl;

  JukeBox juke_box;
  juke_box.addSong(pop_song);
  juke_box.addSong(rock_song);
  juke_box.addSong(reggae_song);
  juke_box.getEverySong();

  juke_box.songRate("Nia", "Fire", 4);

  Pop pop_song_2("Nia", "Love");
  Pop pop_song_3("Nia", "Hate");
  Pop pop_song_4("Nia", "Missing");

  pop_song_2.addRating(3);
  pop_song_3.addRating(4);
  pop_song_4.addRating(5);

  juke_box.addSong(pop_song_2);
  juke_box.addSong(pop_song_3);
  juke_box.addSong(pop_song_4);
  cout << endl;
  cout << "Average song rating of Nia: " << juke_box.getAverageSongRating("Nia");
  cout << endl;
  cout << "Average genre rating of Pop: " << juke_box.getGenreRating("Pop");

  return 0;
}
