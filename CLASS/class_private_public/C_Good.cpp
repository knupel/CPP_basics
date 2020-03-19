#include <iostream>
#include "C_Good.hpp"

Good::Good() {
	std::cout << "Good Constructor" << std::endl;
	return;
}

Good::~Good() {
	std::cout << "Destructor" << std::endl;
	return;
}

void Good::method_public() {
	std::cout << "Method public" << std::endl;
	this->var_public = 6.28; // forbiden because pi is const
	std::cout << "public var: " << this->var_public << std::endl;
	_method_private();


}

void Good::_method_private() {
	std::cout << "Method private" << std::endl;
	this->_var_private = 10000.0; 
	std::cout << "private var: " << this->_var_private << std::endl;
}




