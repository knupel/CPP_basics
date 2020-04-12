#include <iostream>
#include <vector>

template <class T>
void set_list(std::vector<T> &vl) {
	vl.push_back(2);
	std::cout << vl.at(0) << std::endl;
}

template <class T>
class Mother {

public:
	std::vector<T> v_list;
	static int instance;
	Mother() {
		std::cout << "Mother template default constructor" << std::endl;
		instance++;
	}

	~Mother() {
		std::cout << "Mother template destructor" << std::endl;
		instance--;
	}

	void what() {
		std::cout << "MOTHER ahahaha..." << std::endl;
	}
	
	int get_instance() {
		return instance;
	}
};


template <class T>
class Child : public Mother<T> {
private:
	T arg;
public:
	Child() {
		std::cout << "Child template default constructor" << std::endl;
		set_list(this->v_list);
	}

	Child(T arg) : arg(arg) {
		std::cout << "Child template parametric constructor" << std::endl;
		set_list(this->v_list);
	}

	~Child() {
		std::cout << "Child template destructor" << std::endl;
	}

	void what() {
		std::cout << "CHILD ohhhh..." << std::endl;
	}
};


template <class T>
int Mother<T>::instance = 0;


int main() {
	// Mother<int> mother;
	Child<int> child;
	Child<int> child2(3);
	std::cout << "Mother<int>::instance: " <<  Mother<int>::instance << std::endl;
	std::cout << "Child<int>::instance: " <<  Child<int>::instance << std::endl;
	child.what();
}