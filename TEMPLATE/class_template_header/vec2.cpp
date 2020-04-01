
#include <iostream>

template <typename T>
class vec2 {
public:
	vec2() : x(0), y(0) {
		std::cout << "Default constructor" << std::endl;
		vec2<T>::instance++;
		return;
	}

	vec2(T const &x, T const &y) : x(x), y(y) {
		std::cout << "Parametric constructor" << std::endl;
		vec2<T>::instance++;
		return;
	}

	vec2(vec2<T> const & src) x(src.get_x()), y(src.get_y()) {
		// *this = src;
		std::cout << "Copy constructor" << std::endl;
		vec2<T>::instance++;
		return;
	}
	
	~vec2(){
		std::cout << "Destructor" << std::endl;
		vec2<T>::instance--;
		return;
	}

	vec2 & operator=(vec2 const & rhs) {
		this->x = rhs.get_x();
		this->y = rhs.get_y();
		return *this;
	}
  
  // get
	static int get_instance() {
		return vec2::instance;
	}

	T get_x() const {
		return this->x;
	}
	
	T get_y() const {
		return this->x;
	}


private:
	static int instance;
	T const x;
	T const y;
}; 

template <typename T>
std::ostream & operator<<(std::ostream & out, vec2<T> const & rhs) {
	out << "[ " << rhs.get_x() << ", " << rhs.get_y() << " ]";
	return out;
}
/*
template <typename T> class vec2 {
public:
	vec2(T const & x, T const & y): x(x), y(y) {
		std::cout << "Parametric constructor" << std::endl;
		// vec2<T>::instance++;
		return;
	}

	vec2() : x(0), y(0) {
		std::cout << "Default constructor" << std::endl;
		vec2<T>::instance++;
		return;
	}
private:
	T const x;
	T const y;
	vec2();
};
*/
/*
template <typename T>
vec2<T>::vec2() : x(0), y(0) {
	std::cout << "Default constructor" << std::endl;
	vec2<T>::instance++;
	return;
}

template <typename T>
vec2<T>::vec2(T const &x, T const &y) : x(x), y(y) {
	std::cout << "Parametric constructor" << std::endl;
	vec2<T>::instance++;
	return;
}

template <typename T>
vec2<T>::vec2(vec2 const & src) {
	*this = src;
	std::cout << "Copy constructor" << std::endl;
	vec2<T>::instance++;
	return;
}

template <typename T>
vec2<T>::~vec2() {
	std::cout << "Destructor" << std::endl;
	vec2<T>::instance--;
	return;
}

template <typename T>
vec2<T> & vec2<T>::operator=(vec2 const & rhs) {
	this->x = rhs.get_x();
	this->y = rhs.get_y();
	return *this;
}


template <typename T>
int vec2<T>::get_instance(){
	return vec2::instance;
}

template <typename T>
T vec2<T>::get_x() const {
	return this->x;
}

template <typename T>
T vec2<T>::get_y() const {
	return this->y;
}

template <typename T>
std::ostream & operator<< (std::ostream & out, vec2<T> const & rhs) {
	out << "[ " << rhs.get_x() << ", " << rhs.get_y() << " ]";
	return out;
}


template <typename T>
int vec2<T>::instance = 0;
*/








