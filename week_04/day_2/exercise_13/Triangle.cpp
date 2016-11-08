/*
 * Triangle.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: juli
 */

#include "Triangle.h"

Triangle::Triangle(int input_length) {
  this->rows = input_length;
}

Triangle::~Triangle() {}

void Triangle::drawDiamond(){
  for(int i = 0; i < rows; i++){
      for(int j = rows; j > i; j--){
        cout << " ";
      }
      for(int j = 0; j < i*2-1; j++){
              cout << "*";
      }
      cout << endl;
    }
    for(int i = 0; i < rows; i++){
      for(int j = 0; j < i; j++){
        cout << " ";
      }
      for(int j = 0; j < (rows-i)*2-1; j++){
        cout << "*";
      }
      cout << endl;
      }

}
