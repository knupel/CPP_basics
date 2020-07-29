#include <iostream>
#include <thread>

void my_function(int &arg) {
	std::cout << "my_func(): &arg " << arg  << std::endl;
}


int main() {
	int val = 10;
	std::thread my_func(my_function, std::ref(val));

	std::cout << "lost in the main()"  << std::endl;
	my_func.join();
	std::cout << "-->> THE END <<--"  << std::endl;
}