#include <iostream>
#include "C_Good.hpp"

Good::Good(int number) : number(number) {
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

int Good::compare(Good *good){
	if(this->number < good->get_number()) {
		return -1;
	} else if(this->number > good->get_number()) {
		return 1;
	} else {
		return 0;
	}
}




