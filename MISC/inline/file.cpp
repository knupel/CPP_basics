#include <iostream>

// redefinition of methode test
inline int test() {
  return 42;
}

void bar() {
  std::cout << "inline 42: test() = " << test() << ", &test = " << (void*) &test << std::endl;
}