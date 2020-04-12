#include <iostream>

class Mother {
public:
	static int instance;
	Mother() {
		std::cout << "Mother constructor" << std::endl;
		instance++;
	}
	
	int get_instance() {
		return instance;
	}

	void what() {
		std::cout << "HEY MOTHER, two passes on constructor, but at the end only one object" << std::endl;
	}
};

class Child : public Mother {
public:
	Child() {
		std::cout << "Child constructor" << std::endl;
		this->instance++;
	}

	void what() {
		std::cout << "HEY CHILD, two passes on constructor, but at the end only one object" << std::endl;
	}
};

int Mother::instance = 0;

int main() {
	Child child;
	std::cout << "instance: " <<  Mother::instance << std::endl;
	child.what();
}