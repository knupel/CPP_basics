#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <chrono>

int main() {
	int res;
	srand(time(NULL));
	res = rand() % 10;
	std::cout << res << std::endl;

	auto start = std::chrono::system_clock::now();
	for(int i = 0 ; i < 100000000 ; i++) {
		res = rand() % 10000;
	}
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::cout << "elapsed time: " << elapsed_seconds.count() << std::endl;
}