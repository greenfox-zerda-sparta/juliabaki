// Create a constant using preprocessor directives.
// Make it so, that depending on the existence of a defined variable
// it's value is different.
// Write a main function that writes it to the console.
// Experiment in Your IDE compiling it with the directive defined or not.
// (This is what we used -D __DEBUG for example. You can try this and see how it works
// when You compile a Debug version and a Release version.)

#include <iostream>

//#ifndef MY_CONST //ha nincs definiálva akkor legyen a MY_CONST 3
//az elõzõ helyett:
//#ifdef MY_CONST // ha már definiálva van, akkor legyen 3
#ifdef _LOG //hogyha definiálva van a propertiesben prepocessorban pl DEBUG-nál
#define MY_CONST 3
#else
#define MY_CONST 0
#endif

int main(){
  std::cout << MY_CONST << std::endl;
  return 0;
}
