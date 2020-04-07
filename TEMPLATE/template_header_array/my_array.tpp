#ifndef MYARRAY_H
# define MYARRAY_H
#include <cstddef>
#include <iostream>

/**
* TEMPLATE DECLARATION
*/
// template<class T, size_t N>
template<typename T, size_t N>
class MyArray {
    T arr[N];
public:
		MyArray();
		void print();
		T& operator[](int i);
};




/**
* TEMPLATE DEFINITION
*/
// template<class T, size_t N>
template<typename T, size_t N>
MyArray<T,N>::MyArray() {
	//
}

// template<class T, size_t N>
template<typename T, size_t N>
void MyArray<T,N>::print() {
	// use auto because we don't know in advance the typename
	for(const auto v : arr) {
		std::cout << v << "'";
	}
	std::cout << std::endl;
}

#endif
