#include "vec2.cpp"
#include <iostream>
#include <cstdio>


template <class T>
void show_data(vec<T> &v) {
	vec2<T> &temp = dynamic_cast<vec2<T>&>(v);
	std::cout << "v.x(): " << temp.x() << std::endl;
	std::cout << "v.y(): " << temp.y() << std::endl;
}


int main() {
	// set static warning to display info about Constructor and destructor
	vec2<float>::warning(true);

	vec2<float> a;

	std::cout << a << std::endl;

	show_data(a);
	a.x(2);
	show_data(a);

	printf("Instance vec2 float: %i\n", vec2<float>::get_instance());

	return (0);
}
