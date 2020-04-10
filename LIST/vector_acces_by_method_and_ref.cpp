#include <cstdio>
#include <iostream>
#include <vector>

std::vector<int> v_list() {
	std::vector<int> v;
	v.push_back(3);
	v.push_back(2);
	v.push_back(13);
	v.push_back(-1);
	return v;
}

int main() {
	v_list();
	std::cout << v_list().at(1) << std::endl;

	std::vector<int*> other_list;
	int val = 3;
	other_list.push_back(&val);
	std::cout << "ref adress: " << other_list.at(0) << std::endl;
	std::cout << "ref content: " <<other_list.at(0)[0] << std::endl;
	val = 6;
	std::cout << "ref adress: " << other_list.at(0) << std::endl;
	std::cout << "ref content: " <<other_list.at(0)[0] << std::endl;
	return(0);
}