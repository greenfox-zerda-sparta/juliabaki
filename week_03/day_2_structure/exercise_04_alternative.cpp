//============================================================================
// Name        : exercise_04_alternative.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <iostream>

using namespace std;

struct Pirate {
  string name;
  bool has_wooden_leg;
  short int gold_count;
};

// Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates

// Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate

// Create a function that takes an array of pirates (and it's length) then returns the name of the
// richest that has wooden leg

int get_sum_of_gold(Pirate *pirates, int length){
  int sum_of_gold = 0;
  for (int i = 0; i < length; i++) {
    sum_of_gold += pirates[i].gold_count;
  }
  return sum_of_gold;
}

double get_average_of_gold(Pirate *pirates, int length){
  double average_of_gold = get_sum_of_gold(pirates, length) / length;
  return average_of_gold;
}

string find_richest_who_has_wooden_leg(Pirate *pirates, int length){
  string richest_pirate_who_has_wooden_leg;
  int max_gold = pirates[0].gold_count;
  for (int i = 0; i < length; i++){
    if (pirates[i].gold_count > max_gold){
      max_gold = pirates[i].gold_count;
    } else {
        if(pirates[i].has_wooden_leg == true){
          richest_pirate_who_has_wooden_leg = pirates[i].name;
        }
    }
  }
  return richest_pirate_who_has_wooden_leg;
}

int main() {
  Pirate pirates[] = {
    {"Jack", false, 18},
    {"Uwe", true, 8},
    {"Hook", true, 12},
    {"Halloween kid", false, 0},
    {"Sea Wolf", true, 14},
    {"Morgan", false, 1}
  };
  int length = sizeof(pirates)/sizeof(*pirates);
  cout << get_sum_of_gold(pirates, length) << endl;
  cout << get_average_of_gold(pirates, length) << endl;
  cout << find_richest_who_has_wooden_leg(pirates, length) << endl;
  return 0;
}
