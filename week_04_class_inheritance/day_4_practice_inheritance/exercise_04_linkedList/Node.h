/*
 * Node.h
 *
 *  Created on: 2016 nov. 13
 *      Author: juli
 */

#ifndef NODE_H_
#define NODE_H_

class Node {
public:
  Node(double value);
  ~Node();
  double mValue;
  Node* mNext;
  Node* mPrev;
};

#endif /* NODE_H_ */
