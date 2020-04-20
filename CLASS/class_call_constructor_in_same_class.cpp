#include <iostream>
#include <cstdio>
#include <string>

class Mother {
public:
	~Mother() {
		//
	}

	void test() {

	}
};

class Child : public Mother {
public:
	int arg = 0;
	Child() {
		//
	}

	Child(int arg) : arg(arg) {
		//
	}

	~Child() {
		//
	}

	void test(int arg) {
		std::cout << ::Child(arg).arg << std::endl;
	}

};


int main() {
	Child child;
	std::cout << child.arg << std::endl;
	child.test(4);
	std::cout << child.arg << std::endl;
}
