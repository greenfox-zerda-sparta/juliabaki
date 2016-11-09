//============================================================================
// Name        : exercise_02.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;


class Shape {

  public:
    virtual string* getName();
    virtual ~Shape();
};

string* Shape::getName() {
  return new string("Generic Shape");
}

Shape::~Shape(){}

class Triangle: public Shape {

  public:
    string* getName();
};

string* Triangle::getName() {
  return new string("Triangle");
}

class Square: public Shape {

  public:
    string* getName();
};

string* Square::getName() {
  return new string("Square");
}

// First, move the previous code to new hpp and cpp files for each class.
// Include them into this file.
// Make sure they include each other when needed.
// Make sure the code below still works.


int main() {
  Shape* shape = new Shape();
  Triangle* triangle = new Triangle();
  Square* square = new Square();
  Shape* a;
  cout << "I am a...  " << *shape->getName() << endl;
  cout << "I am a...  " << *triangle->getName() << endl;
  cout << "I am a...  " << *square->getName() << endl;

  a = square;
  cout << "I am a...  " << *a->getName() << endl;

  a = triangle;
  cout << "I am a...  " << *a->getName() << endl;

  return 0;
}
