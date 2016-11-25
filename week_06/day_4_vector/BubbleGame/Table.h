#ifndef TABLE_H_
#define TABLE_H_

class Table {
private:
  int width;
  int height;
public:
  Table(int width, int height);
  ~Table();
  void setWidth(int width);
  void setHeight(int height);
  int getWidth();
  int getHeight();


};

#endif /* TABLE_H_ */
