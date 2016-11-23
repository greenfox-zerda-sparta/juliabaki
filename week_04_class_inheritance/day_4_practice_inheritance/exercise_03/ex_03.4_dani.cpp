//============================================================================
// Name        : 4_dani.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class ParentClass {
  private:
  public:
    string getNonVirtualText();
    virtual string getVirtualText();
    virtual ~ParentClass();

};

string ParentClass::getNonVirtualText() {
  return string("Non-Virtual ParentClass here.");
}

string ParentClass::getVirtualText() {
  return string("Virtual ParentClass String");
}

ParentClass::~ParentClass(){}

class ChildClass : public ParentClass {
  private:
  public:
    string getNonVirtualText();
    virtual string getVirtualText();
    virtual ~ChildClass();
};

string ChildClass::getNonVirtualText() {
  return string("Non Virtual ChildClass");
}

string ChildClass::getVirtualText() {
  return string("Vritual ChildClass Stringing hereeeeeeeee....");
}

ChildClass::~ChildClass(){}

int main() {
  ParentClass* a = new ChildClass();
  cout << "As ParentClass:  " << a->getNonVirtualText() << "   ||   " << a->getVirtualText() << endl;
  cout << "As Child Class:  " << ((ChildClass*)a)->getNonVirtualText() << "   ||   " <<((ChildClass*)a)->getVirtualText() << endl;
  return 0;
};
