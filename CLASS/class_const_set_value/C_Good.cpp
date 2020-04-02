#include <iostream>
#include "C_Good.hpp"

Good::Good() : num(0) {
	std::cout << "Default constructor" << std::endl;
}

Good::Good(float num) : num(num) {
	std::cout << "Parametric constructor" << std::endl;
	return;
}

Good::~Good() {
	std::cout << "Destructor" << std::endl;
	return;
}

void Good::set_num(float const num) {
	float &temp = const_cast<float&>(this->num);
	temp = num;
}

float Good::get_num() const {
	return this->num;
}




