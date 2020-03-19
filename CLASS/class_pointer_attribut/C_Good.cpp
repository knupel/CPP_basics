#include <iostream>
#include "C_Good.hpp"

Good::Good(int value) : value(value) {
	std::cout << "Good Constructor" << std::endl;
	return;
}

Good::~Good() {
	std::cout << "Destructor" << std::endl;
	return;
}

int Good::get_value() const{
	return this->value;
}






