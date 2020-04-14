#include <iostream>
#include <vector>

template<class T>
class Mother {
public:
	std::vector<T> v_list;
	std::vector<T*> v_list_ptr;

	Mother() {
		// v_list.push_back(1);
		// v_list.push_back(-1);
		// v_list.push_back(0);
		// std::cout << "Mother" << std::endl;
		// std::cout << "min(): " << *std::min_element(v_list.begin(), v_list.end()) << std::endl;
		// std::cout << "max(): " << *std::max_element(v_list.begin(), v_list.end()) << std::endl;
		return;
	}
};


template<class T>
class Child : public Mother<T> {
public:
	T x;
	T y;
	T z;
	Child(T x, T y, T z) : x(x), y(y), z(z) {
		this->v_list.push_back(x);
		this->v_list.push_back(y);
		this->v_list.push_back(z);
		std::cout << "Child" << std::endl;
		std::cout << "size list: " << this->v_list.size() << std::endl;
		std::cout << "min(): " << *std::min_element(this->v_list.begin(), this->v_list.end()) << std::endl;
		std::cout << "max(): " << *std::max_element(this->v_list.begin(), this->v_list.end()) << std::endl;

		this->v_list_ptr.push_back(&x);
		this->v_list_ptr.push_back(&y);
		this->v_list_ptr.push_back(&z);
		std::cout << "Child" << std::endl;
		std::cout << "size list_ptr: " << this->v_list_ptr.size() << std::endl;
		std::cout << "min(): " << *std::min_element(this->v_list_ptr.begin(), this->v_list_ptr.end())[0] << std::endl;
		std::cout << "max(): " << *std::max_element(this->v_list_ptr.begin(), this->v_list_ptr.end())[0] << std::endl;
		return;
	}
};


int main() {
	Mother <int>mother;
	Child <int>child(0,-1,1);
}