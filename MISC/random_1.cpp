#include <iostream>
#include <random>
#include <time.h>
#include <chrono>

int main() {
	std::random_device seed;
	std::default_random_engine generator(seed());
	std::uniform_int_distribution<int> gen_rand_int(-10,10);
	int res_int = gen_rand_int(generator);  
	std::cout << "res_int: " << res_int << " with uniform_int_distribution: " << std::endl;

	std::uniform_real_distribution<float> gen_rand_float(-10,10);
	float res_float = gen_rand_float(generator);  
	std::cout << "res_float: " << res_float<< " with uniform_real_distribution: "  << std::endl;
	res_float = gen_rand_float(generator);  
	std::cout << "res_float: " << res_float<< " with uniform_real_distribution: "  << std::endl;


	auto start = std::chrono::system_clock::now();
	for(int i = 0 ; i < 10000000 ; i++) {
		// std::random_device seed;
		// std::default_random_engine generator(seed());
		std::uniform_int_distribution<int> gen_rand_int(-10,10);
		res_int = gen_rand_int(generator);
		// std::cout << res_int << std::endl;
	}
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::cout << "elapsed time: " << elapsed_seconds.count() << std::endl;
}