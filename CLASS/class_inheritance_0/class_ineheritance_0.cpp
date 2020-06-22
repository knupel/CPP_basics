#include <iostream>
#include <cstdio>
#include <string>


class Mother {
public:
	virtual ~Mother() { }

	void test() {
		std::cout << "test principal" << std::endl;
	}
};

class Child : public Mother {
public:
	Child() {
		//
	}

	~Child() {
		//
	}

	void test() {
		Mother::test();
	}

	void test(std::string message) {
		std::cout << message << std::endl;
	}

};


int main() {
	Child child;
	child.test();
	child.test("truc");
	

}
