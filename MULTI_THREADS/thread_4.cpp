#include <iostream>
#include <thread>

class R_Thread  {
public:
	std::thread my_thread;

	R_Thread() {
		;
	}

	~R_Thread() {
		;
	}

	void function() {
		;
	}

	void start() {
		std::cout << "start... or not" << std::endl;
		my_thread = std::thread(std::bind(&R_Thread::run,this));
	}

	void run() {
		std::cout << "Dadou run dadou run run run" << std::endl;
		try {
			function();
		} catch (...) {
			std::cout << "R_Thread: Fatal error" << std::endl;
		}

		try {
			my_thread.join();
			// my_thread.detach();
		} catch (...) {
			;
		}
		
	}

	// void join() {

	// }

	std::thread & get() {
		return my_thread;
	}

};




/**
*
*/
class MyThread : public R_Thread {
public:
	int arg;
	void update(int &arg) {
		this->arg = arg;

	}

	void function() {
		std::cout << "MyThread::function(): &arg " << this->arg  << std::endl;
	}
};



// void my_function(int &arg) {
// 	std::cout << "my_func(): &arg " << arg  << std::endl;
// }


int main() {
	int val = 10;
	MyThread thrd;
	thrd.start();
	// thrd.get() my_func(my_function, std::ref(val));

	std::cout << "lost in the main()"  << std::endl;
	//thrd.join();
	std::cout << "-->> THE END <<--"  << std::endl;
}