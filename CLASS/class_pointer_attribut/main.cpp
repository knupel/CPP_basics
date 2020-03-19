#include "C_Good.hpp"
#include <iostream>


int main() {
	Good g(8);
	Good *gp = &g;
	std::cout << g.get_value() << std::endl;

	int Good::*p = NULL;
	p = &Good::value;
	g.*p = 12;
	std::cout << g.get_value() << std::endl;
	gp->*p = 33; // via a pointeur
	std::cout << g.get_value() << std::endl;
	return 0;
}
