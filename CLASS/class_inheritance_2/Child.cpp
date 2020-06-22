#include "Child.hpp"

// to set the parent parameter you need to call the parent constructor
Child::Child() : Mother(), name("nobody") {
	return;
}

Child::~Child() {
	return;
}

Child::Child(float const x, float const y, std::string const name) : Mother(x,y), name(name) {
	return;
}

std::string Child::get_name() const {
	return this->name;
}

void Child::static_talk() {
	std::cout << "Child::static_talk()" << std::endl;
}

void Child::virtual_talk() {
	std::cout << "Child::virtual_talk()" << std::endl;
}