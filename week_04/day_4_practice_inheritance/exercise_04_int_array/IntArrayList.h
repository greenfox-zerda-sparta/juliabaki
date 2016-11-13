/*
 * IntArrayList.h
 *
 *  Created on: 2016 nov. 10
 *      Author: juli
 */

#include <iostream>
#include "IntList.h"

using namespace std;

#ifndef INTARRAYLIST_H_
#define INTARRAYLIST_H_

class IntArrayList: public IntList {
  public:
    IntArrayList();
    ~IntArrayList();
    void append(int _a);
    void insert(int _idx, int _a);
    void deleteValue(int _a);
    void deleteIndex(int _idx);
    int find(int _a);
    int getElement(int _idx);
    int getFirst();
    int getLast();
    void printList();
    bool isEmpty();
  private:
    int* elements;
};

#endif
