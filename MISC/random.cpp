#include <iostream>
#include <random>
 
 int main() {
 	std::random_device seed;
	std::default_random_engine generator(seed());
	std::uniform_int_distribution<int> distribution(-10,10);
	int draw = distribution(generator);  
	std::cout << "draw with uniform_int_distribution: " << draw << std::endl;
	return (0);
}