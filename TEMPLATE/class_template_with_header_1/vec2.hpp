#ifndef VEC2_H
# define VEC2_H

// https://www.codeproject.com/Articles/48575/How-to-define-a-template-class-in-a-h-file-and-imp
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
	~vec2();

	vec2 & operator=(vec2<T> const &rhs);
  
  // get
	static int get_instance();
	T get_x() const;	
	T get_y() const;
}; 

#endif