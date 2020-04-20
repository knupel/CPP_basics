#include <cstdio>
// clang++ -std=c++11 main.cpp -Wconversion && ./a.out
// you can use the flag -Wconversion to receive a warning about implicit conversion.
class Parent {

};

class Child_1 : public Parent {

};

class Child_2 : public Parent {

};


int main() {
	Child_1 a; 
	Parent *b = &a;
	Parent *c = (Parent *) &a;

	Parent *d = &a; 
	// Child_2 *e = d; implicit:  Child_1 cannot became Child_2 in implicit cast
	Child_2  *f = (Child_2 *) d; // explicit: with explicit cast it's possible...oulalala big problem
	/**	
	it's a reason to use a cpp cast collection more efficient and limitative.
	*/

	return(0);
}