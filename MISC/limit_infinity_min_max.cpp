#include <iostream>
#include <limits>
#include <cmath>

template <typename T>
bool infinity_is(T &arg) {
	T max = std::numeric_limits<T>::max();

	// T inf = std::numeric_limits<T>::infinity();
	return (arg > max);
}

int main() {
	int max = std::numeric_limits<int>::max();
	int min = std::numeric_limits<int>::min();
	double pos_infinity = std::numeric_limits<double>::infinity();
	std::cout << "min: " << min << std::endl;
	std::cout << "max: " << max << std::endl;
	std::cout << "pos_infinity: " << pos_infinity << std::endl;

	std::cout << "pos_infinity is infinity or not: " << std::isinf(pos_infinity) << std::endl;
	std::cout << "min is infinity or not: " << std::isinf(min) << std::endl;

	// double max = std::numeric_limits<double>::max();
	// double inf = std::numeric_limits<double>::infinity();
	// while()
  // for(char c = 'a' ; c < 200 ; c++) {
  // 	std::cout << c << " is infinity pos " << infinity_pos_is(c) << std::endl; 
  // }
  // int value = std::numeric_limits<int>::max();
  // std::cout << value << " is infinity pos " << infinity_pos_is(value) << std::endl; 
}