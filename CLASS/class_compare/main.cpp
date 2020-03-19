#include "C_Good.hpp"
#include <iostream>

int main() {
	Good ga(42);
	Good gb(32);


	if(&ga == &ga) {
		std::cout << "instance $ga and $ga is EQUAL" << std::endl;
	} else {
		std::cout << "instance $ga and $ga is DIFERENT" << std::endl;
	}

	if(&ga == &gb) {
		std::cout << "instance $ga and $gb is EQUAL" << std::endl;
	} else {
		std::cout << "instance $ga and $gb is DIFERENT" << std::endl;
	}


	if(ga.compare(&gb) == 0) {
		std::cout << "EQUAL" << std::endl;
	} else if(ga.compare(&gb) == 1) {
		std::cout << "WIN" << std::endl;
	} else if(ga.compare(&gb) == -1) {
		std::cout << "LOOSE" << std::endl;
	}
	
	return 0;
}
