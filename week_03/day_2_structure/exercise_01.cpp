//============================================================================
// Name        : exercise_1.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <iostream>

using namespace std;

struct Computer {
  string name;
  long int cpu_speed_hz;
  long int ram_size;
};

void print_computer(Computer& computer) {
  cout << "Name: " << computer.name << " CPU: " << computer.cpu_speed_hz << " RAM: " << computer.ram_size << endl;
}

int main() {
  //Computer computer = {"Macbook", 3.2e9, 8e9};
  Computer computer = { "Macbook", 3, 8 };
  computer.name = "Macbook Pro";
  print_computer(computer);

  // Change the name of the computer to "Macbook Pro" and print all the stats

  return 0;
}
