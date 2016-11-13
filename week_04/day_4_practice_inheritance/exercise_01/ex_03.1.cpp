//============================================================================
// Name        : 1.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

// EdgeCase #1 - private variables are so private, You can create new ones under the same name in dependent classes
// You should avoid this though. Check out this example to see how this works.

class ParentClass {
  private:
    int mVariable;
  public:
    void setVariable(int _var);
    ParentClass();
    int getVariable();
};

void ParentClass::setVariable(int _var) {
  this->mVariable = _var;
}

ParentClass::ParentClass() {
  this->mVariable = 0;
}

int ParentClass::getVariable() {
  return this->mVariable;
}

class ChildClass : public ParentClass {
  private:
    int mVariable;
  public:
    void setVariable(int _var); // same name here
    int getVariable();
};

void ChildClass::setVariable(int _var) { //this gona set the ChildClass variable
  this->mVariable = _var;
}

int ChildClass::getVariable() {
  return this->mVariable;
}

int main() {
  ParentClass* a = new ChildClass();
  a->setVariable(2);
  ((ChildClass*)a)->setVariable(4); //Casting 'a' to be interpreted as ChildClass
  cout << "a->getVariabla() interpreted as ParentClass- then return ParentClass value: " << a->getVariable() << endl;
  cout << "((ChildClass*)a)->getVariable() interpreted as ChildClass- then return ChildClass value: " << ((ChildClass*)a)->getVariable() << endl;

  return 0;
}
