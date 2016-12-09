#include <iostream>

template<class T, class P>
class CharacterFactory {
public:
  P count;
  CharacterFactory(P b) {
    this->count = b;
  }
  T* create() {
    T* a = NULL;
    for (int i = 0; i < count; i++) {
      a = new T;
    }
    return a;
  }
}
;
