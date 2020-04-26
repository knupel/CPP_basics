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
	T x;
	T y;

public:
	vec2();
	~vec2();

	T get_x() const;	
}; 

#endif