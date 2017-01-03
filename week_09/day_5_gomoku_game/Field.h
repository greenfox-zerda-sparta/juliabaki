#ifndef FIELD_H_
#define FIELD_H_

class Field {
private:
  bool empty;
  int coordinate_x;
  int coordinate_y;
public:
  Field();
  bool isEmpty();
  void setReserved();
  ~Field();
};

#endif /* FIELD_H_ */
