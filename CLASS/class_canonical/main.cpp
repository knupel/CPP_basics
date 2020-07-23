#include "Vec2.hpp"
#include <iostream>
#include <cstdio>

int main() {
	Vec2::warning(true);

	Vec2 a;
	Vec2 b(21,42);
	Vec2 c(a);
  
  std::cout << "Vec2 instance: " << Vec2::get_instance() << std::endl;


	// DON'T WORK ON OPERATOR SIDE
	std::cout << a << std::endl;

	std::cout << "c.get_x(): " << c.get_x() << std::endl;
	std::cout << "c.get_y(): " << c.get_y() << std::endl;

	std::cout << "b.get_x(): " << b.get_x() << std::endl;
	std::cout << "b.get_y(): " << b.get_y() << std::endl;

	std::cout << "a.get_x(): " << a.get_x() << std::endl;
	std::cout << "a.get_y(): " << a.get_y() << std::endl;
	a = b;
	std::cout << "a.get_x(): " << a.get_x() << std::endl;
	std::cout << "a.get_y(): " << a.get_y() << std::endl;
	return 0;
}
