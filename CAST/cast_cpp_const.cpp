#include <cstdio>
// clang++ -std=c++11 main.cpp -Wconversion && ./a.out
// you can use the flag -Wconversion to receive a warning about implicit conversion.


// this cast is a sign a very bad code, but sometime is necessary when the code is from an incasseble class, like a library
// in other case maybe it's a time to refactor your code :)
int main() {
	int a = 42; // ref

	int const *b = &a; // implicit
	int *c = b; // implicit but it's not possible.
	int *d = const_cast<int*>(b); // explicit

	return(0);
}