#include <iostream>
#include "C_Good.hpp"

Good::Good(int a, float b, char c) : a(a), b(b), c(c) {
	std::cout << "Good Constructor" << std::endl;
	std::cout << "var a: " << this->a << std::endl;
	std::cout << "var b: " << this->b << std::endl;
	std::cout << "var c: " << this->c << std::endl;
	return;
}

Good::~Good() {
	std::cout << "Destructor" << std::endl;
	return;
}




