#include <iostream>
#include <thread>

void foo();
void bar();

void with_thread();
void no();

 
int main() {
	no();
	
	with_thread();
}


void no() {
	std::cout << "no foo\n";
	foo();
 
	std::cout << "no bar\n";
	bar();
 
 
	std::cout << "no done!\n";
}


void with_thread() {
	std::cout << "starting first helper foo\n";
	std::thread helper1(foo);
 
	std::cout << "starting second helper bar\n";
	std::thread helper2(bar);
 
	helper1.join();
	helper2.join();
 
	std::cout << "done!\n";
}

void foo() {
	for(int i = 0 ; i < 1000000000 ; i++) {
			// just count
	}
	std::cout << "un milliard de fous" << std::endl;

}
 
void bar() {
	for(int i = 0 ; i < 1000 ; i++) {
		// just count
	}
	std::cout << "un millier de bars" << std::endl;
}