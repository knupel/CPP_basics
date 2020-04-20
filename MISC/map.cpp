#include <iostream>
#include <cmath>
#include <limits>
#include <string>

/**
* Map function inspired from Processing code, but reached in mode template to extend it.

* line : 5068
* https://github.com/processing/processing/blob/master/core/src/processing/core/PApplet.java
*/

template <typename T>
T map(T const &arg, T const &start_src, T const &stop_src, T const &start_dst, T const &stop_dst) {
	T output = 0;
	if(std::is_integral<T>::value) {
		long double e1 = start_dst;
		long double e2 = stop_dst - start_dst;
	  long double e3 = arg - start_src;
	  long double e4 = stop_src - start_src;
	  long double res = e1 + e2 * (e3 / e4);
	  output = static_cast<T>(res);
	} else {
		T e1 = start_dst;
		T e2 = stop_dst - start_dst;
		T e3 = arg - start_src;
		T e4 = stop_src - start_src;
		output = e1 + e2 * (e3 / e4);
	}
	std::string mess = "";
	if (std::isinf(output)) {
		mess = "infinity";
	} else if((output != output) || std::isnan(output)) {
		mess = "NaN";
	}
	if(mess.length() > 0)
		std::cout << "map(" << arg << ", " << start_src << ", " << stop_src << ", " << start_dst << ", " << stop_dst<< ") result is " << mess << std::endl;
	return output;
}


int main() {
	float max_f = std::numeric_limits<float>::max() - 1000.0f;
	float min_f = std::numeric_limits<float>::min() ;
	// std::cout << "max_f: " << max_f << std::endl;
	// std::cout << "min_f: " << min_f << std::endl;
	// std::cout << "map float go to max: " << map(max_f, 0.0f,1.0f, 0.0f,10000.0f) << std::endl;
	//std::cout << "map float go to min: " << map(min_f, 0.0f,1.0f, 0.0f,1000000.0f) << std::endl;

	std::cout << "map(5.0f,0.0f,20.0f,0.0f,40.0f): " << map(5.0f,0.0f,20.0f,0.0f,40.0f) << std::endl;
	// std::cout << "map float go to min: " << map(min_f, 1.0f,0.0f, 10000.0f,0.0f) << std::endl;
	std::cout << "map(5, 0,20, 0,40): " << map(5, 0,20, 0,40) << std::endl;
	std::cout << "map(true, false,true, false,true): " << map(true, false,true, false,true) << std::endl;
	std::cout << "map('b', 'a','e', 'a','z'): " << map('b', 'a','e', 'a','z') << std::endl;
}