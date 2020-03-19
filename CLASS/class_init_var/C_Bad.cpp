#include <iostream>
#include "C_Bad.hpp"

Bad::Bad(int a, float b, char c) {
	std::cout << "Bad Constructor" << std::endl;
	this->a = a;
	this->b = b;
	this->c = c;
	std::cout << "var a: " << this->a << std::endl;
	std::cout << "var b: " << this->b << std::endl;
	std::cout << "var c: " << this->c << std::endl;
	return;
}

Bad::~Bad() {
	std::cout << "Destructor" << std::endl;
	return;
}




