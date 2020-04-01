
#include "Vec2.hpp"
#include <iostream>

Vec2::Vec2() : x(0), y(0) {
	std::cout << "Default constructor" << std::endl;
	Vec2::instance++;
	return;
}

Vec2::Vec2(float const x, float const y) : x(x), y(y) {
	std::cout << "Parametric constructor" << std::endl;
	Vec2::instance++;
	return;
}

Vec2::Vec2(Vec2 const & src) {
	*this = src;
	std::cout << "Copy constructor" << std::endl;
	Vec2::instance++;
	return;
}

Vec2::~Vec2() {
	std::cout << "Destructor" << std::endl;
	Vec2::instance--;
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
