#include <iostream>
#include <vector>

void test(int a, int b) {
	std::cout << a <<std::endl;
	std::cout << b <<std::endl;
}

class Mother {
public:
	Mother() {}
	~Mother() {}

	void test() {
		std::cout << "nothing" << std::endl;
		::test(1,2);
	}
};




int main() {
	Mother mother;
	mother.test();
}

