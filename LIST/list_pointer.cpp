#include <iostream>
#include <vector>
// http://www.cplusplus.com/reference/vector/vector/

int main(void) {
	std::vector<int> list;
	std::vector<int*> list_ptr;
	int arg[] = {0, 1, 2};
	int length = (sizeof(arg)/ sizeof(*arg));
	list.assign(arg,arg+length);


	list_ptr.push_back(&list.at(0));
	int *b = &list.at(1);
	list_ptr.push_back(b);
	std::cout << "list_ptr.at(0): " << list_ptr.at(0) << std::endl;
	std::cout << "list_ptr.at(1): " << list_ptr.at(1) << std::endl;
	std::cout << "*list_ptr.at(0): " << *list_ptr.at(0) << std::endl;
	std::cout << "*list_ptr.at(1): " << *list_ptr.at(1) << std::endl;
	std::cout << "\nlist.at(0) = 2: " << std::endl;
	list.at(0) = 2;
	std::cout << "*list_ptr.at(0): " << *list_ptr.at(0) << std::endl;
	std::cout << "*list_ptr.at(1): " << *list_ptr.at(1) << std::endl;

	
}