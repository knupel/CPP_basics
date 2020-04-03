#include <iostream>
#include <random>
 
 int main() {
 	std::random_device seed;
	std::default_random_engine generator(seed());
	// std::uniform_int_distribution<int> distribution(1,6);
	std::uniform_int_distribution<int> distribution(0,1);
	int draw = distribution(generator);  // generates number in the range 1..6
	std::cout << draw << std::endl;
	return (0);
}