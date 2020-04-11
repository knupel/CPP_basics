#ifndef VEC2_H
# define VEC2_H

#include "vec.cpp"
#include <iostream>


/**
* TEMPLATE DECLARATION
*/
template <class T>
// class vec2 {
class vec2 : public vec<T> {
private:
	static int instance;
	static bool _warning;
	T _x;
	T _y;

public:
	vec2();
	vec2(T const &x, T const &y);
	vec2(vec2<T> const &src);
	~vec2();

	vec2 & operator=(vec2<T> const &rhs);

	// static
	static int get_instance();
	static void warning(bool is);

	// set
	void x(T x);
	void y(T y);
  
  // get
	T x() const;	
	T y() const;
	vec2 copy() const;
}; 

template <class T>
std::ostream & operator<<(std::ostream &out, vec2<T> const &rhs);





/**
* TEMPLATE DEFINITION
*/
template <class T>
vec2<T>::vec2() : _x(0), _y(0) {
	if(vec2<T>::_warning) {
		std::cout << "Default constructor vec2" << std::endl;
		vec2<T>::instance++;
	}	
	return;
}

template <class T>
vec2<T>::vec2(T const &x, T const &y) : _x(x), _y(y) {
	if(vec2<T>::_warning) {
		std::cout << "Parametric constructor vec2" << std::endl;
		vec2<T>::instance++;
	}
	return;
}

template <class T>
vec2<T>::vec2(vec2<T> const &src) : _x(src.x()), _y(src.y()) {
	if(vec2<T>::_warning) {
		std::cout << "Copy constructor  vec2" << std::endl;
		vec2<T>::instance++;
	}
	
	return;
}
	
template <class T>
vec2<T>::~vec2(){
	if(vec2<T>::_warning) {
		std::cout << "Destructor vec2" << std::endl;
		vec2<T>::instance--;
	}
	return;
}

template <class T>
vec2<T> & vec2<T>::operator=(vec2<T> const &rhs) {
	this->x = rhs.x();
	this->y = rhs.y();
	return *this;
}

// set
template <class T>
void vec2<T>::x(T x) {
	this->_x = x;
}

template <class T>
void vec2<T>::y(T y) {
	this->_y = y;
}

// get
template <class T>
int vec2<T>::get_instance() {
	return vec2<T>::instance;
}

template <class T>
void vec2<T>::warning(bool is) {
	vec2<T>::_warning = is;
}

template <class T>
T vec2<T>::x() const {
	return this->_x;
}

template <class T>
T vec2<T>::y() const {
	return this->_y;
}

// get copy
template <class T>
vec2<T> vec2<T>::copy() const {
	return *this;
}

// return info
template <class T>
std::ostream & operator<<(std::ostream & out, vec2<T> const & rhs) {
	out << "[ " << rhs.x() << ", " << rhs.y() << " ]";
	return out;
}

template <class T>
int vec2<T>::instance = 0;

template <class T>
bool vec2<T>::_warning = false;

#endif