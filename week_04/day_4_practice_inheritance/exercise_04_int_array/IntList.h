/*
 * IntList.h
 *
 *  Created on: 2016 nov. 10
 *      Author: juli
 */

#ifndef INTLIST_H_
#define INTLIST_H_


class IntList {
  private:
    int mLength;
  public:
    IntList();
    virtual ~IntList();
    virtual void append(int _a) = 0;
    virtual void insert(int _idx, int _a) = 0;
    virtual void deleteValue(int _a) = 0;
    virtual void deleteIndex(int _idx) = 0;
    virtual int find(int _a) = 0;
    virtual int getFirst() = 0;
    virtual int getLast() = 0;
    virtual void printList() = 0;
    int getLength();
    void incrementLength();
    void decrementLength();
    virtual bool isEmpty() = 0;
};

#endif
