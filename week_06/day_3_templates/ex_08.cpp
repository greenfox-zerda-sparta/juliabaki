#include <iostream>
#include <string>

using namespace std;

template <class TYPE_1, class TYPE_2, class TYPE_3>
class Calculator{
private:
  TYPE_1 a;
  TYPE_2 b;
public:
  Calculator(TYPE_1 a, TYPE_2 b);
  TYPE_3 add();
  TYPE_3 substract();
  TYPE_3 multiply();
  TYPE_3 divide();
};
template <class TYPE_1, class TYPE_2, class TYPE_3>
Calculator<TYPE_1, TYPE_2, TYPE_3>::Calculator(TYPE_1 a, TYPE_2 b){
  this->a = a;
  this->b = b;
}

template <class TYPE_1, class TYPE_2, class TYPE_3>
TYPE_3 Calculator<TYPE_1, TYPE_2, TYPE_3>::add(){
  return a + b;
}

template <class TYPE_1, class TYPE_2, class TYPE_3>
TYPE_3 Calculator<TYPE_1, TYPE_2, TYPE_3>::substract(){
    return a - b;
}

template <class TYPE_1, class TYPE_2, class TYPE_3>
TYPE_3 Calculator<TYPE_1, TYPE_2, TYPE_3>::multiply(){
    return a * b;
}

template <class TYPE_1, class TYPE_2, class TYPE_3>
TYPE_3 Calculator<TYPE_1, TYPE_2, TYPE_3>::divide(){
  if(b == 0){
    throw "Can't divide by 0.";
  }
  return a / b;
}

int main() {
  //Create a class template for a calculator
  //it should have all the basic methods: add, subtract, multiply, divide
  //use exceptions to handle errors in special cases! (find the special cases!)
  Calculator <int, double, double>calculator(2, 0);
  try{
    cout << calculator.add() << endl;
    cout << calculator.divide() << endl;
    cout << calculator.substract() << endl;
    cout << calculator.multiply() << endl;
  }catch (const char* e){
    cout << "Error: " << e << endl;
  };


  return 0;
}
