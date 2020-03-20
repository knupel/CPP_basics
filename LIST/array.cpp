#include <iostream>
#include <array>

int main(void) {
	std::array<float, 3> array_container;
	unsigned length = array_container.size();
	std::cout << "array length: " << length << std::endl;
	// init list
	std::cout << "init list with loop for(;;)"  << std::endl;
	for(unsigned i = 0 ; i < length ; i++) {
		int val = i *2;
		std::cout << "index: " << i << " val: " << val << std::endl;
		array_container[i] = val;
	}

	// read list
	std::cout << "read list by simple access with loop for(:)"  << std::endl;
	for(float elem : array_container) {
		std::cout << "elem: " << elem << std::endl;
	}

	// set list
	std::cout << "change element from list by using method at(index) with loop for(;;)"  << std::endl;
	for(unsigned i = 0 ; i < length ; i++) {
		array_container.at(i) *= 2;
		std::cout << "at: " << array_container.at(i) << std::endl;
	}

	// read list
	std::cout << "read list by simple access with loop for(:)"  << std::endl;
	for(float elem : array_container) {
		std::cout << "elem: " << elem << std::endl;
	}

	// set list
	std::cout << "mult element by 10 by using address & with loop for(:)"  << std::endl;
	for(float & elem : array_container) {
		elem *= 10;
		std::cout << "elem: " << elem << std::endl;
	}


	// read list
	std::cout << "read list by simple access with loop for(:)"  << std::endl;
	for(float elem : array_container) {
		std::cout << "elem: " << elem << std::endl;
	}
	return (0);
}