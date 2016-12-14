//https://github.com/greenfox-academy/teaching-materials/tree/master/cpp-oo/interface

#include <iostream>

#include "Color.h"

int main() {
  Color purple;
  Color pink(255, 34, 21);
  Color pink2 = pink;
  Color pink3(pink);
  Color purple2("#622375");

  std::cout << (int) purple.get_red() << " " << (int) purple.get_green() << " " << (int) purple.get_blue() << std::endl;
  std::cout << (int) pink.get_red() << " " << (int) pink.get_green() << " " << (int) pink.get_blue() << std::endl;
  std::cout << (int) pink2.get_red() << " " << (int) pink2.get_green() << " " << (int) pink2.get_blue() << std::endl;
  std::cout << (int) pink3.get_red() << " " << (int) pink3.get_green() << " " << (int) pink3.get_blue() << std::endl;
  std::cout << (int) purple2.get_red() << " " << (int) purple2.get_green() << " " << (int) purple2.get_blue() << std::endl;

  std::cout << std::endl;

  Color yellow("#FFFF33");
  Color red("#FF3333");
  Color orange;
  orange = yellow.blend(red);
  std::cout << "Blend:" << std::endl;
  std::cout << (int) yellow.get_red() << " " << (int) yellow.get_green() << " " << (int) yellow.get_blue() << std::endl;
  std::cout << (int) red.get_red() << " " << (int) red.get_green() << " " << (int) red.get_blue() << std::endl;
  std::cout << (int) orange.get_red() << " " << (int) orange.get_green() << " " << (int) orange.get_blue() << std::endl;

  std::cout << std::endl;
  std::cout << "Darker:" << std::endl;
  std::cout << (int) purple2.get_red() << " " << (int) purple2.get_green() << " " << (int) purple2.get_blue() << std::endl;
  purple2.darken(0.2);
  std::cout << (int) purple2.get_red() << " " << (int) purple2.get_green() << " " << (int) purple2.get_blue() << std::endl;
  std::cout << std::endl;
  std::cout << "Lighter:" << std::endl;
  purple2.lighten(0.2);
  std::cout << (int) purple2.get_red() << " " << (int) purple2.get_green() << " " << (int) purple2.get_blue() << std::endl;

  return 0;
}
