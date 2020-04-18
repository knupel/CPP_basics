#include <string>
#include <iostream>

template <typename T>
void test(T arg) {
	if(std::is_same<T, char>::value) {
		std::cout << "it's a char" << std::endl;
	} else if(std::is_same<T, std::string>::value) {
		std::cout << "it's a std::string" << std::endl;
	} else if(std::is_same<T, int>::value) {
		std::cout << "it's a int" << std::endl;
	} else if(std::is_same<T, float>::value) {
		std::cout << "it's a float" << std::endl;
	} else if(std::is_same<T, double>::value) {
		std::cout << "it's a double" << std::endl;
	} else if(std::is_same<T, bool>::value) {
		std::cout << "it's a bool" << std::endl;
	} else {
		std::cout << "c'est un machin ou peut-être un truc" << std::endl;
	}
}


int main() {
	test(1);
	test('c');
	test(1.0f);
	test(1.0);
	test(true);
	test("ola");
}