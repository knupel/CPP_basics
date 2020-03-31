#include <cstdio>
// clang++ -std=c++11 main.cpp -Wconversion && ./a.out
// you can use the flag -Wconversion to receive a warning about implicit conversion.


// this cast is very premissive like in C, that's can be dangerous... 
// because an elephant can became a mouse, strange, weird but possible and very dangerous.

// very interesting for the data flux from a stream pipeline
int main() {
	float a = 42.042f;
	void *b = &a; // promotion implicite
	int *c = reinterpret_cast<int*>(b); // demotion explicit on pointer
	int &c = reinterpret_cast<int&>(b); // demotion explicit on address

	return(1);
}