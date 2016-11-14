#include <iostream>
#include "Pop.h"
#include "ReggaeSong.h"
#include "Rock.h"
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
  cout << reggae_song.addRating(5) << endl;
  cout << "Rating of the reggae song: " << reggae_song.getAverageRating() << endl;

  cout << rock_song.addRating(1) << endl;
  cout << "Rating of the rock song: " << rock_song.getAverageRating() << endl;

  return 0;
}
