
#ifndef STONE_H_
#define STONE_H_

class Stone {
private:
  int coordinate_x;
  int coordinate_y;
public:
  Stone(int coordinate_x, int coordinate_y);
  ~Stone();

  int getCoordinate_x();
  int getCoordinate_y();
};

#endif /* STONE_H_ */
