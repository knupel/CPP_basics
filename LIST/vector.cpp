#include <iostream>
#include <vector>
// http://www.cplusplus.com/reference/vector/vector/

int main(void) {
	std::vector<float> container_vector;
	unsigned length = 3;
	std::cout << "container length: " << container_vector.size() << std::endl;
	// init list
	std::cout << "init list with loop for(;;)"  << std::endl;
	for(unsigned i = 0 ; i < length ; i++) {
		int val = i * 2;
		std::cout << "index: " << i << " val: " << val << std::endl;
		container_vector.push_back(val);
	}
	// size after push back
	std::cout << "container length: " << container_vector.size() << std::endl;

	// read list
	std::cout << "read list by simple access with loop for(:)"  << std::endl;
	for(float elem : container_vector) {
		std::cout << "elem: " << elem << std::endl;
	}

	// set list
	std::cout << "change element from list by using method at(index) with loop for(;;)"  << std::endl;
	for(unsigned i = 0 ; i < container_vector.size() ; i++) {
		container_vector.at(i) *= 2;
		std::cout << "at: " << container_vector.at(i) << std::endl;
	}

	// remove last element
	std::cout << "use front() to show first element:"  << container_vector.front() << std::endl;
	std::cout << "use back() to show last element:"  << container_vector.back() << std::endl;
	std::cout << "use pop_back() to remove last element"  << std::endl;
	container_vector.pop_back();
	std::cout << "use back() to show last element:"  << container_vector.back() << std::endl;

		// erase
	std::cout << "erase first element"  << std::endl;
	std::cout << "container_vector.size() " << container_vector.size() << std::endl;
	container_vector.erase(container_vector.begin() +1); // cannot acces directly to erase method... for an obscur reason...
	std::cout << "container_vector.size() " << container_vector.size() << std::endl;

	// read list
	std::cout << "read list by simple access with loop for(:)"  << std::endl;
	for(float elem : container_vector) {
		std::cout << "elem: " << elem << std::endl;
	}

	// set list
	std::cout << "mult element by 10 by using address & with loop for(:)"  << std::endl;
	for(float & elem : container_vector) {
		elem *= 10;
		std::cout << "elem: " << elem << std::endl;
	}

	// read list
	std::cout << "read list by simple access with loop for(:)"  << std::endl;
	for(float elem : container_vector) {
		std::cout << "elem: " << elem << std::endl;
	}




}