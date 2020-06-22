#include "Mother.hpp"

Mother::Mother() : x(0), y(0) {
	return;
}

Mother::~Mother() {
	return;
}

Mother::Mother(float const x, float const y) : x(x), y(y) {
	return;
}

float Mother::get_x() const {
	return this->x;
}

float Mother::get_y() const {
	return this->y;
}


void Mother::static_talk() {
	std::cout << "Mother::static_talk()" << std::endl;
}

void Mother::virtual_talk() {
	std::cout << "Mother::virtual_talk()" << std::endl;
}


