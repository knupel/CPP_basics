#include <iostream>

int main(void) {
	char buff[512];

	std::cout << "len:" << sizeof(buff)/sizeof(buff[0]) << std::endl;

	return (0);
}