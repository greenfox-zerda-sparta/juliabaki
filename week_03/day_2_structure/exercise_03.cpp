//============================================================================
// Name        : exercise_03.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <iostream>

using namespace std;

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
  CarType type;
  double km;
  double gas;
};

// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level
void print_car(Car& my_car){
  string CarType_names[4] = {"Volvo", "Toyota", "Land Rover", "Tesla"};
  if(my_car.type == TESLA){
    cout << "Type: " << CarType_names[my_car.type] << " Km: " << my_car.km << endl;
  } else {
    cout << "Type: " << CarType_names[my_car.type] << " Km: " << my_car.km << " Gas: " << my_car.gas << endl;
  }
}

int main() {
  Car my_car ={TOYOTA, 10.0, 0.0};

  print_car(my_car);
  return 0;
}
