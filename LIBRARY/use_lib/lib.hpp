#ifndef LIB_H
# define LIB_H

#include <iostream>

# define true 1
# define false 0

//MATH
float dist(float x0, float y0, float z0, float x1, float y1, float z1);


//VEC -> VEC3
class vec3 {
	public:
		vec3();
		vec3(float const x, float const y, float const z);
		vec3(vec3 const &);
		~vec3();
		vec3 & operator=(vec3 const & rhs);

		// set
		void set(float x, float y, float z);
		void set_x(float x);
		void set_y(float y);
		void set_z(float z);

    // get 
		static int get_instance();

		float get_x() const;
		float get_y() const;
		float get_z() const;

		vec3 copy();

	private:
		static int instance;
		float x;
		float y;
		float z;
};

std::ostream & operator<< (std::ostream & out, vec3 const & rhs);

#endif
