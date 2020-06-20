#include <iostream>
#include <vector>
#include <cmath>

void test() {
	float a = 11.0;
	float b = 2.0;
	// float m = a%b;
	std::cout << fmod(a,b) << std::endl;
	double tau = 2.0 *M_PI;
	float longitude = 2.3f;
	double theta = fmod(longitude,tau);
	std::cout << theta << std::endl;
}


int main() {
	test();
}

