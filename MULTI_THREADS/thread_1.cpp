#include <iostream>
#include <thread>

void my_small() {
	for(int i = 0 ; i < 10 ; i++) {
		// just to eat the time and do nothing
	}
	std::cout << "my_small()"  << std::endl;
}

void my_huge() {
	for(int i = 0 ; i < 1000000000 ; i++) {
		// just to eat the time and do nothing
	}
	std::cout << "my_huge()"  << std::endl;
}

int main() {
	std::thread t_huge(my_huge);
	std::thread t_small(my_small);

	std::cout << "lost in the main()"  << std::endl;
	t_huge.join();
	t_small.join();
	if(t_huge.get_id() != t_small.get_id()) {
		std::cout << "t_huge.get_id(): " << t_huge.get_id() << std::endl;
		std::cout << "t_small.get_id(): " << t_small.get_id() << std::endl;
	} else {
		std::cout << "the threads have a same id"  << std::endl;
	}

	std::cout << "-->> THE END <<--"  << std::endl;

}