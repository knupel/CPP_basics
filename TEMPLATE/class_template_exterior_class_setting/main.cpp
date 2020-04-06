#include "vec2.cpp"
#include <iostream>
#include <cstdio>

class Truc {
public:
	float b;

	Truc () {
		return;
	}

	Truc (int b) : b(b) {
		return;
	}

	Truc (Truc const &src) : b(src.b) {
		return;
	}
};

std::ostream & operator<<(std::ostream & out, Truc const & rhs) {
	out << rhs.b;
	return out;
}



int main() {
	// set static warning to display info about Constructor and destructor
	vec2<float>::warning(true);
	vec2<Truc>::warning(false);



	vec2<float> a;
	vec2<Truc> b(1,1);


	// DON'T WORK ON OPERATOR SIDE
	std::cout << a << std::endl;
	std::cout << b << std::endl;


	std::cout << "a.x(): " << a.x() << std::endl;
	std::cout << "a.y(): " << a.y() << std::endl;
	a.x(2);
	std::cout << "a.x(): " << a.x() << std::endl;
	std::cout << "a.y(): " << a.y() << std::endl;

	printf("instance vec2 float: %i\n", vec2<float>::get_instance());
	printf("instance vec2 Truc: %i\n", vec2<Truc>::get_instance());

	return (0);
}
