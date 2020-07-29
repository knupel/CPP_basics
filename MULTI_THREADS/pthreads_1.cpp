// clang++ *.cpp -lpthread && ./a.out
// clang++ *.cpp  && ./a.out // that's work too but why ????

#include <iostream>
#include <cstdlib>
#include <pthread.h>


void *my_function(void *thread_id) {
	long tid;
	tid = (long)thread_id;
	long max = tid * tid * tid * tid * tid + 1;
	for(long i = 0 ; i < max ; i++) {
		for(long j = 0 ; j < max ; j++) {
			// nothing to do just need take a time to make nothing !!!

		}
	}
	std::cout << "Hello World! " << tid << std::endl;
	pthread_exit(NULL);
}

int main () {
	int num_thread = 10;
	pthread_t threads[num_thread];
	int rc;

	// for(int i = 0; i < num_thread; i++ ) {
	// 	std::cout << "creating thread: " << i << std::endl;
	// 	rc = pthread_create(&threads[i], NULL, my_function, (void *)i);
	// 	if (rc) {
	// 		std::cout << "Error:unable to create thread," << rc << std::endl;
	// 		exit(-1);
	// 	}
	// }

	// here we reverse the order, to start from voracious thread
	for(int i = num_thread -1; i >= 0; i-- ) {
		std::cout << "creating thread: " << i << std::endl;
		rc = pthread_create(&threads[i], NULL, my_function, (void *)i);
		if (rc) {
			std::cout << "Error:unable to create thread," << rc << std::endl;
			exit(-1);
		}
	}
	std::cout << "-->>>>>>THE JOB IS DONE<<<<<<<<<<--" << std::endl;
	pthread_exit(NULL);
}