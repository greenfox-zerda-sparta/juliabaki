#ifdef TEST
#include "catch.hpp"
#include "Player.h"

TEST_CASE("Player placeStone()") {
  Player player;
  REQUIRE(player.placeStone(3, 4)->getCoordinate_x() == 3);
}
#endif
