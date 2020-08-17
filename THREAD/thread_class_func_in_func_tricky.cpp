#include <iostream>
#include <thread>



class MyClass {
public:
	bool thread_is = false;
	bool thread_in_progress_is = true;

	MyClass();
	~MyClass();

	void draw();
	bool func();
};




MyClass::MyClass() {
	return;
}

MyClass::~MyClass() {
	return;
}

void MyClass::draw() {
	int count = 0;
	while(this->thread_in_progress_is) {
		if(!this->thread_is) {
			this->thread_is = true;
			std::thread my_thread(&MyClass::func, this);
			my_thread.detach();
		}
		count++;
	}
	std::cout << "this->thread_is " << std::boolalpha << this->thread_is << " in " << count << " pass" <<std::endl;
}

bool MyClass::func() {
	for(int i = 0 ; i < 1000000 ; i++) {
		// just count
	}
	this->thread_is = false;
	this->thread_in_progress_is = false;
	std::cout << "le million de fous" << std::endl;
	return false;
}




int main() {
	MyClass myclass;
	myclass.draw();
}

 