#include <cstdio>
#include <iostream>

class Truc {
public:
	int arg;
	Truc() : arg(10) {
	}

	int & arg_ref() {
		return arg;
	}
};

int main() {
	Truc truc;
	printf("adress arg from class: %p\n", &truc.arg);
	printf("adress arg from class via method: %i\n", truc.arg_ref());
	printf("adress arg from class via method: %p\n", &truc.arg_ref());

	return(0);
}