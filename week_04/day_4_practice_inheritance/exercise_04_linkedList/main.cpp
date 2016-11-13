
#include <iostream>

#include "LinkedList.h"
#include "Node.h"
using namespace std;

// Choose either IntArrayList or IntLinkedList and implement it.
// Write code here in a main function that uses it and tests it in edge cases as well.
// Inherit from IntList and create an implementation that uses an Nodes to store list elements!

int main() {
  LinkedList* theList = new LinkedList;
  theList->append(1);
  theList->append(2);
  theList->append(3);
  theList->append(4);

  theList->printList();

  return 0;
}
