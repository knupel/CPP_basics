#include <iostream>

class Singleton {
private:
	static Singleton *instance;
	int _data;
 
	// Private constructor so that no objects can be created.
	Singleton() {
		_data = 0;
	}

public:
	// give the acces to the class via the pointer
	static Singleton *get_instance() {
		if (!instance) {
			instance = new Singleton;
		}
		return instance;
	}

	int data() {
		return this->_data;
	}

	void data(int data) {
		this->_data = data;
	}
};

//Initialize pointer to zero so that it can be initialized in first call to getInstance
Singleton *Singleton::instance = 0;

void funct() {
	Singleton *single = single->get_instance();
	single->data(200);
}

class Foo {
public:
	void bar() {
		Singleton *only_one_bar = only_one_bar->get_instance();
		only_one_bar->data(300);
	}
};


int main() {
	Singleton *s = s->get_instance();
	std::cout << s->data() << std::endl;
	s->data(100);
	std::cout << s->data() << std::endl;
	funct();
	std::cout << s->data() << std::endl;
	Foo foo;
	foo.bar();
	std::cout << s->data() << std::endl;
}