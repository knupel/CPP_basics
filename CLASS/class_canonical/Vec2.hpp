#ifndef VEC2_H
# define VEC2_H

#include <iostream>

class Vec2 {
public:
	Vec2(); // canonical
	Vec2(float const x, float const y);
	Vec2(Vec2 const &); // canonical
	~Vec2(); 	// canonical

	Vec2 & operator=(Vec2 const & rhs); 	// canonical

	// INFO
	static int get_instance();
	static void warning(bool is);
	static bool warning();

	float get_x() const ;
	float get_y() const ;


private:
	static int instance;
	static bool _warning;
	float x;
	float y;
}; 

std::ostream & operator<< (std::ostream & out, Vec2 const & rhs);

#endif