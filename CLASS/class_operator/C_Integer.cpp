#include <iostream>
#include "C_Integer.hpp"

Integer::Integer(int value) : value(value) {
	std::cout << "Integer constructor" << std::endl;
	return;
}

Integer::~Integer() {
	std::cout << "Integer destructor" << std::endl;
	return;
}

Integer & Integer::operator=(Integer const & rhs) {
	std::cout << "Assignation operator called from: " << this->value;
	std::cout << " to " << rhs.get_value() << std::endl;
	this->value = rhs.get_value();
	return *this;
}

Integer Integer::operator+(Integer const & rhs) const {
	std::cout << "Addition operator called with: " << this->value;
	std::cout << " and " << rhs.get_value() << std::endl;
	return Integer (this->value + rhs.get_value());

}

std::ostream & operator<<(std::ostream & out, Integer const & rhs) {
	out << rhs.get_value();
	return out;
}

int Integer::get_value() const{
	return this->value;
}






