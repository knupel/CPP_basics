#include <cstdio>
#include <typeinfo>
// clang++ -std=c++11 main.cpp -Wconversion && ./a.out
// you can use the flag -Wconversion to receive a warning about implicit conversion.
class Parent {
	// need a virtual element to use dynamic cast
	public:
		virtual ~Parent() {

		}
};

class Child_1 : public Parent {

};

class Child_2 : public Parent {

};

class Other {

};



/*
dynamic cast stat to execution, not a the compilation.
this cast need a virtual method in the class
Run Time type info > RTTI
*/
int main() {
	Child_1 a; // reference
	Parent *b = &a;

	// Explicit
	Child_1 *c = dynamic_cast<Child_1 *>(b); // explicit cast
	if(c == nullptr) {
		printf("Child_2 & c: conversion fail\n");
	} else {
		printf("Child_2 & c: conversion is a successfull\n");
	}

	try {
		Child_2 & d = dynamic_cast<Child_2 &>(*b);
		printf("Child_2 & d: conversion is a successfull\n");
	}
	catch (std::bad_cast &bc) {
		printf("Child_2 & d: conversion fail\n");
	}

	return(0);
}