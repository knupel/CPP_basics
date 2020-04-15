#include <iostream>
#include <vector>

int main() {
	int x = 0;
	int y = -1;
	int z = 1;
	std::vector<int> v_list;
	std::vector<int*> v_list_ptr;
	v_list.push_back(x);
	v_list.push_back(y);
	v_list.push_back(z);
	std::cout << "classic list" << std::endl;
	std::cout << "size list: " << v_list.size() << std::endl;
	std::cout << "v_list min(): " << *std::min_element(v_list.begin(), v_list.end()) << std::endl;
	std::cout << "v_list max(): " << *std::max_element(v_list.begin(), v_list.end()) << std::endl;

	v_list_ptr.push_back(&x);
	v_list_ptr.push_back(&y);
	v_list_ptr.push_back(&z);

	std::cout << "\npointer list" << std::endl;
	std::cout << "size list_ptr: " << v_list_ptr.size() << std::endl;
	std::cout << "v_list_ptrmin(): " << *std::min_element(v_list_ptr.begin(), v_list_ptr.end())[0] << std::endl;
	std::cout << "v_list_ptrmax(): " << *std::max_element(v_list_ptr.begin(), v_list_ptr.end())[0] << std::endl;
	std::cout << "\npass pointer list to temp classic list" << std::endl;
	std::vector<int> temp;
	for(size_t i = 0 ; i < v_list_ptr.size() ; i++) {
		temp.push_back(v_list_ptr.at(i)[0]);
	}
	std::cout << "size temp: " << temp.size() << std::endl;
	std::cout << "temp min(): " << *std::min_element(temp.begin(), temp.end()) << std::endl;
	std::cout << "temp max(): " << *std::max_element(temp.begin(), temp.end()) << std::endl;
}