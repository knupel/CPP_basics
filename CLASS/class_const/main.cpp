#include "C_Good.hpp"
#include <iostream>

int main() {
	Good g(3.14, 42);
	g.method();
	g.method_const();
	return 0;
}