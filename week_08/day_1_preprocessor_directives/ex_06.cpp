// In Your main function create an array of integers. 5 long.
// Fill it up with random numbers.
// For each number treat it as the radius of a circle.
// Calculate the circumference and the area of the circle with such a radius.
// Use preprocessor to define the MY_PI constant. Use this in the calculations.

#define MY_PI 3.14
#define radius(a) a * MY_PI

#include <stdlib.h>
#include <iostream>
#include <time.h>

int main(){
  int array[5];

  srand (time(NULL));
  for(int i = 1; i < 6; i++){
    array[i] = rand() % 10;
    std::cout << "Radius: " << array[i] << ", Area: " << radius(array[i]) << std::endl;
  }
  return 0;
}
