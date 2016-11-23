/*
 * ChildClass.h
 *
 *  Created on: 2016 nov. 10
 *      Author: juli
 */

#include <iostream>
#include <string>
#include "Parentclass.h"

using namespace std;

#ifndef CHILDCLASS_H_
#define CHILDCLASS_H_

class ChildClass: public Parentclass{
  public:
    ChildClass();
    ~ChildClass();
    string getStringVirtual();
    string getParentString_2();
    string ChildString_2;
  private:
    string ChildString_1;
};

#endif
