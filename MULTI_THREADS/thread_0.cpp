#include <iostream>
#include <thread>

void my_function() {
	std::cout << "my_function() is calling, not so bad"  << std::endl;
}

int main() {
	std::thread t(my_function);
	t.join();
}