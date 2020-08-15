#include <iostream>
#include <thread>

class MyClass {
public:
	bool thread_is = false;

	MyClass() {}
	~MyClass() {}

	bool func() {
		for(int i = 0 ; i < 1000000 ; i++) {
			// just count
		}
		this->thread_is = false;
		std::cout << "le million de fous" << std::endl;
		return false;
	}
};

void buff_thread(MyClass &myclass, bool &progress_is) {
	progress_is = myclass.func();
}

int main() {
	MyClass myclass;
	bool thread_in_progress_is = true;
	int count = 0;
	while(thread_in_progress_is) {
		if(!myclass.thread_is) {
			myclass.thread_is = true;
			std::thread my_thread(buff_thread, std::ref(myclass), std::ref(thread_in_progress_is));
			my_thread.detach();
		}
		count++;
	}
	std::cout << "myclass.thread_is " << std::boolalpha << myclass.thread_is << " in " << count << " pass" <<std::endl;
}







 