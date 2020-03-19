#include "C_Sample.hpp"
#include <iostream>

int main() {
	Sample s;
	s.methode();
	s.var = 42;
	std::cout << "change Sample s.var in main: " << s.var << std::endl;
	return 0;
}