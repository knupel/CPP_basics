
#include "Vec2.hpp"
#include <iostream>

Vec2::Vec2() : x(0), y(0) {
	if(Vec2::_warning) {
		std::cout << "Default constructor Vec2" << std::endl;
		Vec2::instance++;
	}
	return;
}

Vec2::Vec2(float const x, float const y) : x(x), y(y) {
	if(Vec2::_warning) {
		std::cout << "Parametric constructor" << std::endl;
		Vec2::instance++;
	}
	return;
}

Vec2::Vec2(Vec2 const & src) {
	*this = src;
	if(Vec2::_warning) {
		std::cout << "Copy constructor" << std::endl;
		Vec2::instance++;
	}
	return;
}

Vec2::~Vec2() {
	if(Vec2::_warning) {
		std::cout << "Destructor" << std::endl;
		Vec2::instance--;
	}
	return;
}

Vec2 & Vec2::operator=(Vec2 const & rhs) {
	this->x = rhs.get_x();
	this->y = rhs.get_y();
	return *this;
}



int Vec2::get_instance(){
	return Vec2::instance;
}

void Vec2::warning(bool is) {
	Vec2::_warning = is;
}

bool Vec2::waring() {
	return Vec2::_warning;
}


float Vec2::get_x() const {
	return this->x;
}

float Vec2::get_y() const {
	return this->y;
}

std::ostream & operator<< (std::ostream & out, Vec2 const & rhs) {
	out << "[ " << rhs.get_x() << ", " << rhs.get_y() << " ]";
	return out;
}



int Vec2::instance = 0;
bool Vec2::_warning = false;
