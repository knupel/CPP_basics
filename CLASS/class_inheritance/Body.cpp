#include "header.hpp"

Body::Body() : x(0), y(0) {
	return;
}

Body::~Body() {
	return;
}

Body::Body(float const x, float const y) : x(x), y(y) {
	return;
}

float Body::get_x() const {
	return this->x;
}

float Body::get_y() const {
	return this->y;
}


void Body::static_talk() {
	std::cout << "Body::static_talk()" << std::endl;
}

void Body::virtual_talk() {
	std::cout << "Body::virtual_talk()" << std::endl;
}


