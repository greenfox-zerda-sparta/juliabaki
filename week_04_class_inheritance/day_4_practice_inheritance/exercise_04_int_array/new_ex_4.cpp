//============================================================================
// Name        : new_ex_4.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "IntList.h"
#include "IntArrayList.h"
using namespace std;

// Inherit from IntList and create an implementation that uses an array to store list elements!

// Take the attached hpp and cpp files. Read them trough.
// Choose either IntArrayList or IntLinkedList and implement it.
// Write code here in a main function that uses it and tests it in edge cases as well.

//increment, decrement, delete, find
// insert if index > length

int main() {
  IntList* theList = new IntArrayList();
  cout << "Is the list empty? " << theList->isEmpty() << endl;
  theList->printList();
  theList->append(6);
  theList->printList();
  theList->append(8);
  theList->printList();
  cout << theList->getLength() << endl;
  cout << endl;
  theList->insert(-1, 3);
  theList->printList();
  cout << endl;
  cout << theList->getFirst() << endl;
  cout << theList->getLast() << endl;
  cout << endl;
  theList->deleteIndex(1);
  theList->printList();
  theList->deleteValue(6);
  theList->printList();

  for(int i = 0; i < 15; i++){
    theList->append(rand()%100);
  }
  theList->printList();

  return 0;
}
