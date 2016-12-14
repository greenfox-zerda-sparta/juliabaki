#include "Color.h"
#include <stdlib.h>
#include <math.h>

Color::Color() :
    _red(0), _green(0), _blue(0) {
}

Color::Color(unsigned char red, unsigned char green, unsigned char blue) {
  this->_red = red;
  this->_green = green;
  this->_blue = blue;
}

Color::Color(Color& other) {
  this->_red = other._red;
  this->_green = other._green;
  this->_blue = other._blue;
}

Color::Color(std::string hexa) {
  hexadecimal_to_decimal(hexa);
  if (hexa[0] == '#') {
    hexa = hexa.erase(0, 1);
  }

  this->_red = (unsigned char) hexadecimal_to_decimal(hexa.substr(0, 2));
  this->_green = (unsigned char) hexadecimal_to_decimal(hexa.substr(2, 2));
  this->_blue = (unsigned char) hexadecimal_to_decimal(hexa.substr(4, 2));
}

int Color::hexadecimal_to_decimal(std::string hexa) {
  int hexa_length = hexa.length();
  double decimal = 0;

  for (int i = 0; i < hexa_length; ++i) {
    char actual_character = hexa[i];

    if (actual_character >= 48 && actual_character <= 57)
      actual_character -= 48;
    else if (actual_character >= 65 && actual_character <= 70)
      actual_character -= 55;
    decimal += actual_character * pow(16, ((hexa_length - i) - 1));
  }

  return (int) decimal;
}

unsigned char Color::get_red() {
  return _red;
}

unsigned char Color::get_green() {
  return _green;
}

unsigned char Color::get_blue() {
  return _blue;
}
