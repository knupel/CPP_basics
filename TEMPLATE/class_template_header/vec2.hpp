#ifndef VEC2_H
# define VEC2_H

#include <iostream>
template <typename T> class vec2 {
public:
	vec2(T const & x, T const & y);
private:
	T const x;
	T const y;
	vec2();
};
/*
template <typename T>
class vec2 {
public:
	vec2(); // canonical
	vec2(T const &x, T const &y);
	vec2(vec2 const &); // canonical
	~vec2(); 	// canonical

	vec2 & operator=(vec2 const & rhs); 	// canonical

	static int get_instance();

	T get_x() const;
	T get_y() const;


private:
	static int instance;
	T const x;
	T const y;
}; 

template <typename T>
std::ostream & operator<<(std::ostream & out, vec2<T> const & rhs);
*/

#endif