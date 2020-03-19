#include <iostream>
#include "C_Good.hpp"

Good::Good(float pi, int number) : pi(pi), number(number) {
	std::cout << "Good Constructor" << std::endl;
	std::cout << "var pi: " << this->pi << std::endl;
	std::cout << "var number: " << this->number << std::endl;
	return;
}

Good::~Good() {
	std::cout << "Destructor" << std::endl;
	return;
}

void Good::method() {
	std::cout << "Method" << std::endl;
	this->pi = 6.28; // forbiden because pi is const
	std::cout << "const pi: " << this->pi << std::endl;
	this->number = 12;
	std::cout << "number: " << this->number << std::endl;

}

void Good::method_const() const {
	std::cout << "Method const" << std::endl;
	std::cout << "const pi: " << this->pi << std::endl;
	// this->number = 12; // forbiden because the method is a const method
	std::cout << "number: " << this->number << std::endl;

}




