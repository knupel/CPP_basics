#include <iostream>
#include <list>
// http://www.cplusplus.com/reference/list/list/

int main(void) {
	std::list<float> c_list;
	unsigned length = 3;
	std::cout << "array length: " << c_list.size() << std::endl;
	// init list
	std::cout << "init list with loop for(;;)"  << std::endl;
	for(unsigned i = 0 ; i < length ; i++) {
		int val = i * 2;
		std::cout << "index: " << i << " val: " << val << std::endl;
		c_list.push_back(val);
	}
	// size after push back
	std::cout << "array length: " << c_list.size() << std::endl;

	// read list
	std::cout << "read list by simple access with loop for(:)"  << std::endl;
	for(float elem : c_list) {
		std::cout << "elem: " << elem << std::endl;
	}

	// set list
	std::cout << "change element from list by using pointer with loop for(;;)"  << std::endl;
	for(std::list<float>::iterator p = c_list.begin() ; p != c_list.end() ; p++) {
		*p *= 2;
		std::cout << "pointer: " << *p << std::endl;
	}

	// remove last element
	std::cout << "use front() to show first element:"  << c_list.front() << std::endl;
	std::cout << "use back() to show last element:"  << c_list.back() << std::endl;
	std::cout << "use pop_back() to remove last element"  << std::endl;
	c_list.pop_back();
	std::cout << "use back() to show last element:"  << c_list.back() << std::endl;

	// read list
	std::cout << "read list by simple access with loop for(:)"  << std::endl;
	for(float elem : c_list) {
		std::cout << "elem: " << elem << std::endl;
	}

	// set list
	std::cout << "mult element by 10 by using address & with loop for(:)"  << std::endl;
	for(float & elem : c_list) {
		elem *= 10;
		std::cout << "elem: " << elem << std::endl;
	}

	// read list
	std::cout << "read list by simple access with loop for(:)"  << std::endl;
	for(float elem : c_list) {
		std::cout << "elem: " << elem << std::endl;
	}
	return (0);
}