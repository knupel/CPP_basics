#include "C_Good.hpp"
#include <iostream>

void fb() {
	Good gc;
	std::cout << Good::get_instance() << std::endl;
}

void fa() {
	Good gb;
	std::cout << Good::get_instance() << std::endl;
	fb();
}
int main() {
	Good ga;
	std::cout << Good::get_instance() << std::endl;
	fa();
	std::cout << Good::get_instance() << std::endl;
	return 0;
}
