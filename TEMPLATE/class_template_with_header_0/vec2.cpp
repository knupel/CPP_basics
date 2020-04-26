#include "vec2.hpp"
/**
* TEMPLATE DEFINITION
*/

template <class T>
vec2<T>::vec2() : x(0), y(0) {
	std::cout << "Default constructor" << std::endl;
	return;
}

	
template <class T>
vec2<T>::~vec2() {
	std::cout << "Destructor" << std::endl;
	return;
}


template <class T>
T vec2<T>::get_x() const {
	return this->x;
}

