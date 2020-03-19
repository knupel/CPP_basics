#include "C_Good.hpp"
#include <iostream>


int main() {
	Good g(8);
	Good *gp = &g;
	std::cout << g.get_value() << std::endl;

	int (Good::*f)() const;
	f = &Good::get_value;

	(g.*f)();
	std::cout << f << std::endl;
	(gp->*f)();; // via a pointeur
	std::cout << f << std::endl;
	return 0;
}
