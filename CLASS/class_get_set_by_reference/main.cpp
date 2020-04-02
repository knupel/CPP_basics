#include "C_Good.hpp"
#include <iostream>

int main() {
	Good g;
	g.set_number(42);
	std::cout << "void get_number(): " << g.get_number() << std::endl;
	int &ref = g.get_number_ref();
	ref = 10;
	std::cout << "void get_number(): " << g.get_number() << std::endl;
	return 0;
}