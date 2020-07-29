#include <iostream>
#include <pthread.h>

void *my_function(void *arg_0, void *arg_1) {
	long argument_0 = (long)arg_0;
	std::cout << "argument_0: " << argument_0  << std::endl;
	std::cout << "arg_0: " << arg_0  << std::endl;
	long argument_1 = (long)arg_1;
	std::cout << "argument_1: " << argument_1  << std::endl;
	std::cout << "arg_1: " << arg_1  << std::endl;
}

int main() {
	pthread_t my_thread;
	int truc = 2;
	int machin = 3;
	int rc = pthread_create(&my_thread, NULL, my_function, (void *)truc, (void *)machin);
	std::cout << "-->>>>>>THE JOB IS DONE<<<<<<<<<<--" << std::endl;
	pthread_exit(NULL);
}