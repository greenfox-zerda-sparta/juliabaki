
#ifndef STONE_H_
#define STONE_H_

class Stone {
private:
  int coordinate_x;
  int coordinate_y;
  int type;
public:
  Stone(int coordinate_x, int coordinate_y, int type);
  ~Stone();

  int getCoordinate_x();
  int getCoordinate_y();
  int getType();
};

#endif /* STONE_H_ */
