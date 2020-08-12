
#include <thread>
#include <iostream>
#include <atomic>

class MyClass{
public:
	MyClass();
	~MyClass();
	void start();
	void thread_main();
private:
	bool stop_thread = false;
	// std::atomic_bool<bool> stop_thread = false; // Super simple thread stopping.
	std::thread* the_thread; // Or you could use std::unique_ptr<>.
};