#include "C_Integer.hpp"
#include <iostream>

int main() {
	Integer ia(30);
	Integer ib(10);
	Integer ic(0);

	std::cout << "Value of ia: " << ia << std::endl;
	std::cout << "Value of ib: " << ib << std::endl;
	ib = Integer(12);
	std::cout << "Value of ib: " << ib << std::endl;

	std::cout << "Value of ic: " << ic << std::endl;
	ic = ia + ib;
	std::cout << "value of ic: " << ic << std::endl;
	
	return 0;
}
