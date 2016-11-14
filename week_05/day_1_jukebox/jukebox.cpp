#include <iostream>
#include "Pop.h"
#include "ReggaeSong.h"
#include "Rock.h"
using namespace std;

int main() {
  Pop pop_song("Nia", "Fire");
  Rock rock_song("Sia", "Water");
  ReggaeSong reggae_song("Ria", "Soil");

cout << pop_song.getName() << endl;
cout << rock_song.getName() << endl;
cout << reggae_song.getName() << endl;

  return 0;
}
