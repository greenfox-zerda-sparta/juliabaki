#ifndef COLOR_H_
#define COLOR_H_

#include <string>

class Color {
private:
  unsigned char _red;
  unsigned char _green;
  unsigned char _blue;
public:
  Color();
  Color(unsigned char, unsigned char, unsigned char);
  Color(Color& other);
  Color(std::string);

  static int hexadecimal_to_decimal(std::string hex);

  unsigned char get_red();
  unsigned char get_green();
  unsigned char get_blue();
};

#endif /* COLOR_H_ */
