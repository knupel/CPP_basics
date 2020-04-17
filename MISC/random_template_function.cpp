#include <iostream>
#include <random>

float random(float min, float max) {
	std::random_device seed;
	std::default_random_engine generator(seed());
	std::uniform_real_distribution<float> gen_rand_float(min,max);
	return gen_rand_float(generator); 
}

double random_double(double min, double max) {
	std::random_device seed;
	std::default_random_engine generator(seed());
	std::uniform_real_distribution<double> gen_rand_double(min,max);
	return gen_rand_double(generator); 
}

double random_normal(double min, double max) {
	std::random_device seed;
	std::default_random_engine generator(seed());
	std::normal_distribution<double> gen_rand_double(min,max);
	return gen_rand_double(generator); 
}

int random_int(int min, int max) {
	std::random_device seed;
	std::default_random_engine generator(seed());
	std::uniform_int_distribution<int> gen_rand_int(min,max);
	return gen_rand_int(generator); 
}

bool random_bool() {
	std::random_device seed;
	std::default_random_engine generator(seed());
	std::uniform_int_distribution<int> gen_rand_int(0,1);
	return gen_rand_int(generator); 
}


int main() {
	std::cout << "random(-1,1): " << random(-10,10) << std::endl;
	std::cout << "random_int(-1,1): " << random_int(-10,10) << std::endl;
	std::cout << "random_bool(): " << random_bool() << std::endl;
	std::cout << "random_normal(-1,1): " << random_normal(-1,1) << std::endl;
	std::cout << "random_double(-1,1): " << random_double(-10,10) << std::endl;
}




