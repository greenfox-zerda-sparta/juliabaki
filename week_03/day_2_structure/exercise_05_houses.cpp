//============================================================================
// Name        : houses.cpp
// Author      : juliabaki
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <iostream>

using namespace std;

struct House {
  string address_of_house;
  int price;
  int number_of_rooms;
  int area_of_house;
};

void fillUp (House* my_house){
  my_house->address_of_house = "Budapest";
  my_house->price = 20000;
  my_house->number_of_rooms = 2;
  my_house->area_of_house = 40;
}

int get_reference_price(House& my_house, int reference_price_for_one_sqm){
  return reference_price_for_one_sqm * my_house.area_of_house;
}

double get_house_price_for_one_sqm(House& my_house){
  return my_house.price / my_house.area_of_house;
}

bool decide_house_worth_to_buy (House& my_house){
  bool worth_it = true;
  if (get_reference_price(my_house, 400) > get_house_price_for_one_sqm(my_house)){
    worth_it = false;
  }
  return worth_it;
}

// Create a struck that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters
//
// The market price of the houses is 400 EUR / square meters
// Create a function that takes a refrence to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)
//
// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.
//
// Create a function that takes an array of houses (and it's length),
// then it creates a new array that consists new houses with the calculated price,
// but all the other properties are the same.

int main() {
  House* my_house = new House[4];
  fillUp(my_house);
  cout << decide_house_worth_to_buy(*my_house);

  delete[] my_house;
  my_house = nullptr;

  return 0;
}

