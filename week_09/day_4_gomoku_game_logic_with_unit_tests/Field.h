#ifndef FIELD_H_
#define FIELD_H_

class Field {
private:
  bool empty;
public:
  Field();
  bool isEmpty();
  void setReserved();
  ~Field();
};

#endif /* FIELD_H_ */
