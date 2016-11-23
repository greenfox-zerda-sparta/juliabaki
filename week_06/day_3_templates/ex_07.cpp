#include <iostream>
#include <string>

using namespace std;

template <class TYPE>
class Item {
private:
  int item_1;
  string item_2;
public:
  void set_item(TYPE input);
  TYPE get_item(string name);
};

template <class TYPE>
void Item<TYPE>::set_item(TYPE input){
  if(sizeof(input) > sizeof(item_1)){
    item_2 = input;
    cout << item_2 << endl;
  } else {
    cout << "This is not a good solution";
  }
}

template <class TYPE>
TYPE Item<TYPE>::get_item(string name){
  TYPE choose;
  if(choose.compare("item_1") == 0){
    choose = item_1;
  } else {
    choose = item_2;
  }
  return choose;
}

int main() {
  //Create a simple class template which contains 2 item and has both a get and a set method for these!

  Item<string> item;
  item.set_item("proba_1");
  cout << item.get_item("item_2");

  return 0;
}
