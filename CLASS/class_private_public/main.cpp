#include "C_Good.hpp"
#include <iostream>

int main() {
	Good g;
	g.method_public();
	// g._method_private(); // cannot do that because is private.
	return 0;
}