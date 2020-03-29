#include "header.hpp"
#include <iostream>
#include <cstdio>


int main() {
	Human *human = new Human(5,5);
	std::cout << human->get_x() << " | " << human->get_y() << std::endl;
	human->set(10,10);
	std::cout << human->get_x() << " | " << human->get_y() << std::endl;
	human->message("message methodre from my mother because she is abstract one, not an an interface");
	return 0;
}
