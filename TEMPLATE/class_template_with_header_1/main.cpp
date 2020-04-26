#include "vec2.hpp"
#include "vec2.cpp"
#include <iostream>


int main() {
	vec2<float> a;
	vec2<float> e;
	std::cout << a << std::endl;
	e = a;
	std::cout << e << std::endl;
}
