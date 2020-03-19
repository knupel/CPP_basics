#include "R_Body.hpp"
#include <iostream>


int main() {
	R_Body body_a;
	R_Body body_b(21,42);
	R_Body body_c(body_a);

	// DON'T WORK ON OPERATOR SIDE
	std::cout << body_a << std::endl;

	std::cout << "body_c.get_x(): " << body_c.get_x() << std::endl;
	std::cout << "body_c.get_y(): " << body_c.get_y() << std::endl;

	std::cout << "body_a.get_x(): " << body_a.get_x() << std::endl;
	std::cout << "body_a.get_y(): " << body_a.get_y() << std::endl;
	body_a = body_b;
	std::cout << "body_a.get_x(): " << body_a.get_x() << std::endl;
	std::cout << "body_a.get_y(): " << body_a.get_y() << std::endl;
	return 0;
}
