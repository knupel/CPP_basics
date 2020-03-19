#include <iostream>
#include "C_Good.hpp"

Good::Good() {
	std::cout << "Good Constructor" << std::endl;
	return;
}

Good::~Good() {
	std::cout << "Destructor" << std::endl;
	return;
}

int Good::get_number() const{
	return this->number;
}

void Good::set_number(int number){
	this->number = number;
}




