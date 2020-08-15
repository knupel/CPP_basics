#include <iostream>
#include <thread>

void func(bool &is);

void with_thread(int &max, bool &is);

// https://stackoverflow.com/questions/9094422/how-to-check-if-a-stdthread-is-still-running
int main() {
	int max_thread = 10;
	bool thread_is = false;
	while(max_thread > 0) {
		with_thread(max_thread, thread_is);
		std::cout << "thread: " << max_thread <<std::endl;
	}
	std::cout << "et voilà le travail..." << std::endl;
}


void with_thread(int &max, bool &is) {
	if(!is) {
		std::thread my_thread(func, std::ref(is));
		my_thread.detach();
	} else {
		max--;
		is = false;
	}
}

void func(bool &is) {
	for(int i = 0 ; i < 10000000 ; i++) {
		// just count
	}
	is = true;
	std::cout << "mille fous" << std::endl;
}
 