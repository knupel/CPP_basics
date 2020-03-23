#include <iostream>

void ref_c(int *c) {
	*c = 1;
}

void ref_cpp(int &c) {
	c = 100;
}

int main(void) {
	int num = 5;
	std::cout << "num: " << num << std::endl;
	ref_c(&num);
	std::cout << "C method to change by reference num: " << num << std::endl;
	ref_cpp(num);
	std::cout << "C++ method to change by reference num: " << num << std::endl;
	return (0);
}
