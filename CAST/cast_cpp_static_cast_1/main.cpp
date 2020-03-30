#include <cstdio>
// clang++ -std=c++11 main.cpp -Wconversion && ./a.out
// you can use the flag -Wconversion to receive a warning about implicit conversion.

int main() {
	int a = 42;
	double b = a;
	int c = b; // implicit cast demotion > flaged by -Wconversion
	int d = static_cast<int>(b); // explicit cast demotion

	return(0);
}