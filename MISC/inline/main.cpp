#include <iostream>
// Note the good stuff with inline you can redefine / overload a function in othe file.cpp
// that's can be good but you need to carefull to the compilation see exeample below.


/**
first compilation > clang++  -std=c++11 *.cpp && ./a.out
inline 0: test() = 42, &test = 0x1021a4ac0
inline 42: test() = 42, &test = 0x1021a4ac0
*/

/**
second compilation > clang++  -std=c++11 main.cpp file.cpp && ./a.out
inline 0: test() = 0, &test = 0x10a886ac0
inline 42: test() = 0, &test = 0x10a886ac0
*/

/**
third compilation > clang++  -std=c++11 file.cpp main.cpp  && ./a.out
inline 0: test() = 42, &test = 0x103090ac0
inline 42: test() = 42, &test = 0x103090ac0
*/


/**
fourth compilation > clang++ -std=c++11 -O2 *.cpp  && ./a.out
inline 0: test() = 0, &test = 0x1041759f0
inline 42: test() = 42, &test = 0x1041759f0
*/


void bar();

inline int test() {
  return 0;
}

int main() {
  std::cout << "inline 0: test() = " << test() << ", &test = " << (void*) &test << std::endl;
  bar();
}