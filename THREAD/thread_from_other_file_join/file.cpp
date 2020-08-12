
#include "file.hpp"


MyClass::MyClass(){
	std::cout << "MyClass: Constructor" << std::endl;
	return;
}

MyClass::~MyClass() {
	stop_thread = true;
  if(the_thread->joinable()) {
  	the_thread->join();
  }
  std::cout << "MyClass: Destructor" << std::endl;
	return;
}

void MyClass::start() {
	the_thread = new std::thread(&MyClass::thread_main,this);	
}


void MyClass::thread_main() {
	while(!stop_thread){
		// Do something useful, e.g:
		for(int i = 0 ; i < 1000000 ; i++) {
			// nothing, just count to the million baby
		}
	}
	std::cout << "the million is done" << std::endl;
}