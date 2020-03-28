#include "header.hpp"

// to set the parent parameter you need to call the parent constructor
Human::Human() : Body(), name("nobody") {
	return;
}

Human::~Human() {
	return;
}

Human::Human(float const x, float const y, std::string const name) : Body(x,y), name(name) {
	return;
}

std::string Human::get_name() const {
	return this->name;
}

void Human::static_talk() {
	std::cout << "Human::static_talk()" << std::endl;
}

void Human::virtual_talk() {
	std::cout << "Human::virtual_talk()" << std::endl;
}