#include <iostream>
#include <thread>

void foo();
void bar();

void with_thread();


int main() {
	for(int i = 0 ; i < 5 ; i++) {
		with_thread();
	}

	std::cout << "et voilà le travail..." << std::endl;
	
}




void with_thread() {
	std::thread helper1(foo);
	std::thread helper2(bar);
 
	helper1.detach();
	helper2.detach();
 

}

void foo() {
	for(int i = 0 ; i < 100000 ; i++) {
			// just count
	}
	std::cout << "cent mille fous" << std::endl;

}
 
void bar() {
	for(int i = 0 ; i < 1000 ; i++) {
		// just count
	}
	std::cout << "un millier de bars" << std::endl;
}