
#include <thread>
#include <iostream>

class MyClass{
public:
	MyClass();
	~MyClass();
	void start();
	void detach();
	void thread_main();
private:
	bool stop_thread = false; // Super simple thread stopping.
	std::thread* the_thread; // Or you could use std::unique_ptr<>.
};