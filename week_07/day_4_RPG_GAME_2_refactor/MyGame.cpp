#include "MyGame.h"
#include <fstream>
#include <string>
#include <iostream>

MyGame::MyGame() {
  map_vector = std::vector<std::vector<bool>>(10, std::vector<bool>(10));
  load_characters();
}

MyGame::~MyGame() {
  for (unsigned int i = 0; i < characters.size(); i++) {
    delete characters[i];
  }
}

void MyGame::init(GameContext& context) {
  context.load_file("floor.bmp");
  context.load_file("wall.bmp");
  context.load_file("hero-down.bmp");
  context.load_file("hero-up.bmp");
  context.load_file("hero-left.bmp");
  context.load_file("hero-right.bmp");
  context.load_file("skeleton.bmp");
  context.load_file("boss.bmp");
}

void MyGame::load_map_from_file_to_vector() {
  std::ifstream input;
  input.open("good_map.txt");
  char temp;
  if (input.is_open()) {
    for (unsigned int k = 0; k < 10; k++) {
      for (int h = 0; h < 10; h++) {
        input >> temp;
        if (temp == '0') {
          map_vector[k][h] = false;
        } else if (temp == '1') {
          map_vector[k][h] = true;
        }
      }
    }
  }
  input.close();
}

void MyGame::load_characters() {
  hero = new Hero;
  this->characters.push_back(hero);
}

void MyGame::draw_map(GameContext& context) {
  load_map_from_file_to_vector();
  for (unsigned int i = 0; i < 10; i++) {
    for (unsigned int j = 0; j < 10; j++) {
      if (map_vector[i][j] == false) {
        context.draw_sprite("wall.bmp", j * 72, i * 72);
      } else if (map_vector[i][j] == true) {
        context.draw_sprite("floor.bmp", j * 72, i * 72);
      }
    }
  }
}

void MyGame::render(GameContext& context) {
  draw_map(context);

  context.draw_sprite("skeleton.bmp", 0, 72);
  context.draw_sprite("skeleton.bmp", 216, 72);
  context.draw_sprite("skeleton.bmp", 648, 216);
  context.draw_sprite("boss.bmp", 648, 648);

  hero->draw(context);

  context.render();
}

