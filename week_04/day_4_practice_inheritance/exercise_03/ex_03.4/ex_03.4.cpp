//============================================================================
// Name        : 4.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Parentclass.h"
#include "ChildClass.h"
using namespace std;

// Create a class called ParentClass. It should have two public functions. Both return a string. One virtual, the other not.
// Each should return a unique string.
// Create a ChildClass which inherits from the ParentClass publicly.
// This should override both functions. The virtual and the nonvirtual one both.
// These should return unique string again.
//
// Create a main() function. In this function, create a ParentClass* pointer and instanciate a ChildClass member for that pointer.
// Hint: This should look something like this: ParentClass* a = new ChildClass();
// Print out the result of both functions on this a pointer.
// Print out the result of both functions if You first cast pointer a to be interpreted as of type ChildClass*
//
int main() {
  Parentclass* a = new ChildClass();
  cout << "Parent virtual get: " << a->getStringVirtual() << endl;
  cout << "Parent non virtual get: " << a->getstringNonVirtual() << endl;
  cout << "Child virtual: " << ((ChildClass*)a)->getStringVirtual() << endl;
  cout << "Child nonvirtual Parent: " << ((ChildClass*)a)->getParentString_2() << endl;
  return 0;
}
