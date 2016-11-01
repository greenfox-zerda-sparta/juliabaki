//============================================================================
// Name        : exercise_13_dice.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void print_possible_combinations(int number_of_dices, int number_of_sides) {
  int max_outcome = number_of_dices * number_of_sides;
  for (int outcome = 2; outcome <= max_outcome; outcome++) {
    int number_of_occurences = number_of_sides - (abs(outcome - number_of_sides - 1));
    cout << outcome << " occurs " << number_of_occurences << " times because ";
    for (int first_roll = 1; first_roll <= number_of_sides; first_roll++) {
      int second_roll = outcome - first_roll;
      if (second_roll > 0 && second_roll <= 6) {
        cout << first_roll << " + " << second_roll << " ";
      }
    }
    cout << endl;
  }
}

int main() {
  // Write a program that calculates all the possible combinations with rolling two dices.
  // It should print each value how many times occures.
  // for example 3 occurs 2 times because 1 + 2 and 2 + 1
  int number_of_dice = 2;
  int number_of_side = 6;

  print_possible_combinations(number_of_dice, number_of_side);
  return 0;
}
