#include "Color.h"

Color::Color() : _red(0), _green(0), _blue(0){}

Color::Color(unsigned char red, unsigned char green, unsigned char blue){
  this->_red = red;
  this->_green = green;
  this->_blue = blue;
}

Color::Color(Color& other){
  this->_red = other._red;
  this->_green = other._green;
  this->_blue = other._blue;
}

unsigned char Color::get_red(){
  return _red;
}

unsigned char Color::get_green(){
  return _green;
}

unsigned char Color::get_blue(){
  return _blue;
}
