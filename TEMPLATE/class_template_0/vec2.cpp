#ifndef VEC2_H
# define VEC2_H

#include <iostream>

/**
* TEMPLATE DECLARATION
*/
template <class T>
class vec2 {
private:
	static int instance;
	T x;
	T y;
	/**
	* =openrator with const method
	T const x;
	T const y;
	*/

public:
	vec2();
	vec2(T const &x, T const &y);
	vec2(vec2<T> const &src);
	~vec2();

	vec2 & operator=(vec2<T> const &rhs);
  
  // get
	static int get_instance();
	T get_x() const;	
	T get_y() const;
}; 

template <class T>
std::ostream & operator<<(std::ostream &out, vec2<T> const &rhs);





/**
* TEMPLATE DEFINITION
*/
template <class T>
vec2<T>::vec2() : x(0), y(0) {
	std::cout << "Default constructor" << std::endl;
	vec2<T>::instance++;
	return;
}

template <class T>
vec2<T>::vec2(T const &x, T const &y) : x(x), y(y) {
	std::cout << "Parametric constructor" << std::endl;
	vec2<T>::instance++;
	return;
}

template <class T>
vec2<T>::vec2(vec2<T> const &src) : x(src.get_x()), y(src.get_y()) {
	std::cout << "Copy constructor" << std::endl;
	vec2<T>::instance++;
	return;
}
	
template <class T>
vec2<T>::~vec2(){
	std::cout << "Destructor" << std::endl;
	vec2<T>::instance--;
	return;
}

template <class T>
vec2<T> & vec2<T>::operator=(vec2<T> const &rhs) {
	// classic method when the member is not const.
	this->x = rhs.get_x();
	this->y = rhs.get_y();
	/*
	** // when the member private is const
	T &temp_x = const_cast<T&>(this->x);
	T &temp_y = const_cast<T&>(this->y);
	temp_x = rhs.get_x();
	temp_y = rhs.get_y();
	*/
	return *this;
}

// get
template <class T>
int vec2<T>::get_instance() {
	return vec2<T>::instance;
}

template <class T>
T vec2<T>::get_x() const {
	return this->x;
}

template <class T>
T vec2<T>::get_y() const {
	return this->y;
}

template <class T>
std::ostream & operator<<(std::ostream & out, vec2<T> const & rhs) {
	out << "[ " << rhs.get_x() << ", " << rhs.get_y() << " ]";
	return out;
}

template <class T>
int vec2<T>::instance = 0;

#endif