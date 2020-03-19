#include <iostream>
#include "C_Sample.hpp"

Sample::Sample() {
	std::cout << "Constructor" << std::endl;
	this->var = 12;
	std::cout << "setting var in constructor: " << this->var << std::endl;
	this->methode();
	return;
}

Sample::~Sample() {
	std::cout << "Destructor" << std::endl;
	return;
}

void Sample::methode(void) {
	std::cout << "methode"  << std::endl;
	return;
}




