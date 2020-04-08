// #include <cstdio>
#include <iostream>

// c++11 methode
template<typename Base, typename T>
inline bool instanceof(const T*) {
   return std::is_base_of<Base, T>::value;
}

class Parent{
	//
};

class Child : Parent {
	//
};

class Other{
	//
};

int main() {
	Child *child;
	std::cout << "answer is " << instanceof<Child>(child) << std::endl;
	if(instanceof<Child>(child)) {
		std::cout << "child is instance of Child class" << std::endl;
	} else {
		std::cout << "child is not instance of Child class" << std::endl;
	}

	std::cout << "answer is " << instanceof<Parent>(child) << std::endl;
	if(instanceof<Parent>(child)) {
		std::cout << "child is instance of Parent class" << std::endl;
	} else {
		std::cout << "child is not instance of Parent class" << std::endl;
	}

	std::cout << "answer is " << instanceof<Other>(child) << std::endl;
	if(instanceof<Other>(child)) {
		std::cout << "child is instance of Other class" << std::endl;
	} else {
		std::cout << "child is not instance of Other class" << std::endl;
	}

	Parent *parent;
	std::cout << "answer is " << instanceof<Child>(parent) << std::endl;
	if(instanceof<Child>(parent)) {
		std::cout << "parent is instance of Child class" << std::endl;
	} else {
		std::cout << "parent is not instance of Child class" << std::endl;
	}
}