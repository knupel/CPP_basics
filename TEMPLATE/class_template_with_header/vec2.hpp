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
* include cpp
*/
#include "vec2.cpp"
#endif