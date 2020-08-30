#include <iostream>
#include <vector>
// http://www.cplusplus.com/reference/vector/vector/

int main(void) {
	std::vector<float> list;
	float arg[] = {0.10001, 0.1, 0.15, 0.25, 0.50, 0.9, 0.9999999999, 1.0, 1.000001};
	int length = (sizeof(arg)/ sizeof(*arg));
	list.assign(arg,arg+length);
	std::cout << "list.size(): " << list.size() << std::endl;
	list.erase(list.begin());
	list.erase(list.begin());
	std::cout << "list.size(): " << list.size() << std::endl;
}