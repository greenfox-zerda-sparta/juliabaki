//https://github.com/greenfox-academy/teaching-materials/tree/master/cpp-oo/interface

#include <iostream>

#include "Color.h"

int main(){
  Color purple;
  Color pink (255, 34, 21);
  Color pink2 = pink;
  Color pink3(pink);

  std::cout << (int)purple.get_red() << " " << (int)purple.get_green() << " " << (int)purple.get_blue() << std::endl;
  std::cout << (int)pink.get_red() << " " << (int)pink.get_green() << " " << (int)pink.get_blue() << std::endl;
  std::cout << (int)pink2.get_red() << " " << (int)pink2.get_green() << " " << (int)pink2.get_blue() << std::endl;
  std::cout << (int)pink3.get_red() << " " << (int)pink3.get_green() << " " << (int)pink3.get_blue() << std::endl;

  return 0;
}
