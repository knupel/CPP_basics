#include <cstdio>
// clang++ -std=c++11 main.cpp -Wconversion && ./a.out
// you can use the flag -Wconversion to receive a warning about implicit conversion.
int main() {
	int a = 42; // reference value
	int const *b = &a; // implicit type qualifier const
	int const *c = (int const *) &a; // explicit type qualifier const
	int const *d = &a; // implicit conversion from to const to non-const
	// int *e = d; // cannot convert a const to an non-const
	int *f = (int *) d; // explictit conversion from const to non-const, it's possible because it's an explicite command from the coder:)
	return(0);
}