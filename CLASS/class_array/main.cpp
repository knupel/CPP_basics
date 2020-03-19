#include "R_Body.hpp"
#include <iostream>


int main() {
	int num = 10;
	R_Body body[num];

	int len = sizeof(body) / sizeof(*body);
	std::cout << "num: " << num << std::endl;
	std::cout << "len: " << len << std::endl;
	for(int i = 0 ; i < len ; i++) {
		std::cout << body[i].get_instance() << std::endl;
	}
	return 0;
}
