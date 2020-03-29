#include "header.hpp"
// PATCHAMAMA
void Patchamama_abstract::message(std::string const &str) {
	std::cout << str << std::endl;
}

// HUMAN
void Human::set(float x, float y) {
	this->x = x;
	this->y = y;
}

Human::Human() : x(0), y(0) {
	return;
}

Human::Human(float x, float y) : x(x), y(y) {
	return;
}

Human::~Human() {
	return;
}


float Human::get_x() const {
	return this->x;
}

float Human::get_y() const {
	return this->y;
}




