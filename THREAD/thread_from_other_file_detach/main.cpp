#include "file.hpp"
// https://rafalcieslak.wordpress.com/2014/05/16/c11-stdthreads-managed-by-a-designated-class/
int main() {
	MyClass truc;
	truc.start();
	truc.detach();
	for(int i = 0 ; i < 10 ; i++) {}
	std::cout << "X" << std::endl;

	for(int i = 0 ; i < 100 ; i++) {}
	std::cout << "C" << std::endl;

	for(int i = 0 ; i < 1000 ; i++) {}
	std::cout << "M" << std::endl;

	for(int i = 0 ; i < 10000 ; i++) {}
	std::cout << "DM" << std::endl;

	for(int i = 0 ; i < 100000 ; i++) {}
	std::cout << "CM" << std::endl;

	for(int i = 0 ; i < 1000000 ; i++) {}
	std::cout << "MM" << std::endl;

	for(int i = 0 ; i < 10000000 ; i++) {}
	std::cout << "DMM" << std::endl;
}