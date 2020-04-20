#include <iostream>
#include <cstdio>
// clang++ -std=c++11 main.cpp -Wconversion && ./a.out
// you can use the flag -Wconversion to receive a warning about implicit conversion.

int main() {
	int a = 42;
	double b = a;
	int c = b; // implicit cast demotion > flaged by -Wconversion
	int d = static_cast<int>(b); // explicit cast demotion
	std::cout << d << std::endl;

	/**
	* if the maximum value is exceeded, the min value is returned.
	*/
	int e = static_cast<int>(std::numeric_limits<double>::max()); // explicit cast demotion
	std::cout << e << std::endl;

	return(0);
}