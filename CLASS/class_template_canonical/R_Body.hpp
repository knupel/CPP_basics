#ifndef R_BODY_H
# define R_BODY_H

#include <iostream>

class R_Body {
public:
	R_Body(); // canonical
	R_Body(float const x, float const y);
	R_Body(R_Body const &); // canonical
	~R_Body(); 	// canonical

	R_Body & operator=(R_Body const & rhs); 	// canonical

	static int get_instance();

	float get_x() const ;
	float get_y() const ;


private:
	static int num_instance;
	float x;
	float y;
}; 

std::ostream & operator<< (std::ostream & out, R_Body const & rhs);

#endif