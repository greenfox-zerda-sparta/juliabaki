//============================================================================
// Name        : exercise_17.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

//Divides two floating point numbers
float divide(float a, float b){
  float result = a/b;
  return result;
}

//Creates the reciproc of a floating point value
float reciproc(float a){
  float result = divide(a,1);
  return result;
}

int main(int argc, char** argv){
	//Implement the functions declared above.
	//Maybe You can use one function in the implementation of an other one...

	cout << "Dividing 1 by 4: " << divide(1, 4) << endl;
	cout << "Dividign 1.0 by 5.0: " << divide(1.0, 5.0) << endl;
	cout << "The repciproc of 6 is: " << reciproc(6) << endl;

	return 0;
}
