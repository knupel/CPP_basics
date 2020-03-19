
#include "R_Body.hpp"
#include <iostream>

R_Body::R_Body() : x(0), y(0) {
	std::cout << "Default constructor" << std::endl;
	R_Body::num_instance++;
	return;
}

R_Body::R_Body(float const x, float const y) : x(x), y(y) {
	std::cout << "Parametric constructor" << std::endl;
	R_Body::num_instance++;
	return;
}

R_Body::R_Body(R_Body const & src) {
	*this = src;
	std::cout << "Copy constructor" << std::endl;
	R_Body::num_instance++;
	return;
}

R_Body::~R_Body() {
	std::cout << "Destructor" << std::endl;
	R_Body::num_instance--;
	return;
}

R_Body & R_Body::operator=(R_Body const & rhs) {
	this->x = rhs.get_x();
	this->y = rhs.get_y();
	return *this;
}



int R_Body::get_instance(){
	return R_Body::num_instance;
}


float R_Body::get_x() const {
	return this->x;
}

float R_Body::get_y() const {
	return this->y;
}

std::ostream & operator<< (std::ostream & out, R_Body const & rhs) {
	out << "[ " << rhs.get_x() << ", " << rhs.get_y() << " ]";
	return out;
}



int R_Body::num_instance = 0;
