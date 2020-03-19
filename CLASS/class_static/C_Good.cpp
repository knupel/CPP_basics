#include <iostream>
#include "C_Good.hpp"

Good::Good() {
	std::cout << "Good Constructor" << std::endl;
	Good::num_instance++;
	return;
}

Good::~Good() {
	std::cout << "Destructor" << std::endl;
	Good::num_instance--;
	return;
}

int Good::get_instance(){
	return Good::num_instance;
}

int Good::num_instance = 0;





