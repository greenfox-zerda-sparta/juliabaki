/*
 * Parentclass.h
 *
 *  Created on: 2016 nov. 10
 *      Author: juli
 */

#include <iostream>
#include <string>

using namespace std;

#ifndef PARENTCLASS_H_
#define PARENTCLASS_H_

class Parentclass {
  public:
    Parentclass();
    virtual ~Parentclass();
    virtual string getStringVirtual();
    string getstringNonVirtual();
    string string_2;
  private:
    string string_1;
};

#endif
