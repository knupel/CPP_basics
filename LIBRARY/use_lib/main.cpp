#include <iostream>
#include "lib.hpp"

int main() {
	vec3 a = vec3(1,2,3);
	std::cout << a.get_x() << ", " << a.get_y() << std::endl;

	return(0);
}