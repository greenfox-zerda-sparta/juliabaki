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

  static int hexadecimal_to_decimal(std::string);

  unsigned char get_red();
  unsigned char get_green();
  unsigned char get_blue();

  Color blend(const Color& other);
  void darken(float amount);
  void lighten(float amount);
};

#endif /* COLOR_H_ */
