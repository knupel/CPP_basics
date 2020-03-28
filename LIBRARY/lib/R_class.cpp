// #pragma once
#include "lib.hpp"

int vec3::instance = 0;

std::ostream & operator<< (std::ostream & out, vec3 const & rhs) {
	out << "[ " << rhs.get_x() << ", " << rhs.get_y() << ", " << rhs.get_z() <<" ]";
	return out;
}


// vec3 class
vec3::vec3() : x(0), y(0), z(0) {
	vec3::instance++;
	return;
}

vec3::vec3(float const x, float const y, float const z) : x(x), y(y), z(z) {
	vec3::instance++;
	return;
}

vec3::vec3(vec3 const & src) {
	*this = src;
	vec3::instance++;
	return;
}

vec3::~vec3() {
	vec3::instance--;
	return;
}

vec3 & vec3::operator=(vec3 const & rhs) {
	this->x = rhs.get_x();
	this->y = rhs.get_y();
	this->z = rhs.get_z();
	return *this;
}

// set
void vec3::set_x(float x) {
	this->x = x;
}

void vec3::set_y(float y) {
	this->y = y;
}

void vec3::set_z(float z) {
	this->z = z;
}

void vec3::set(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

// get
int vec3::get_instance(){
	return vec3::instance;
}

vec3 vec3::copy() {
	return *this;
}

float vec3::get_x() const {
	return this->x;
}

float vec3::get_y() const {
	return this->y;
}

float vec3::get_z() const {
	return this->z;
}


















