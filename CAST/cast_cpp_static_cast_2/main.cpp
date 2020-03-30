#include <cstdio>
// clang++ -std=c++11 main.cpp -Wconversion && ./a.out
// you can use the flag -Wconversion to receive a warning about implicit conversion.
class Parent {

};

class Child_1 : public Parent {

};

class Child_2 : public Parent {

};

class Other {

};


int main() {
	Child_1 a; // reference

	Parent *b = &a;
	Child_1 *c = b; // implicit cast
	Child_2 *d = static_cast<Child_2 *>(b); // that's work and it's a problem, so there is an other cast to solve that.
	Other *e  = static_cast<Other *>(b); // explicit cast work because it's not from the same family.

	return(0);
}