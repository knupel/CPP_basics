#include <iostream>
#include <cstdio>
// if there is template you need to include the file 
// besides compile with gcc or clang
#include "utils.cpp"


int main() {
	double d1 = 12.3;
	double d2 = 4.5;
	simple<double>(d1);
	std::vector<double> list;
	set_list(list,d1,d2);
	std::cout << "list size: " << list.size() << " content: " << list.at(0) << ", " << list.at(1) << std::endl;
	set_list(list,d1,d2);
	std::cout << "list size: " << list.size()  << std::endl;
}
