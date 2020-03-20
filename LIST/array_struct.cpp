#include <iostream>
#include <array>

/*
to compile c+11
clang++ -std=c++11 main.c
*/
struct body {
	// c++11 give the possibility to init var in the struct
	int x = 0;
	int y = 0;
	void info();
};

void body::info() {
	std::cout << "[ " << x << ", " << y << " ]" << std::endl;
}


int main(void) {
	std::array<body, 3> array_container;
	unsigned length = array_container.size();
	std::cout << "array length: " << length << std::endl;
	// init list
	std::cout << "init list with loop for(;;) acces by [index] or by af(index)"  << std::endl;
	for(unsigned i = 0 ; i < length ; i++) {
		int val_x = rand()%100;
		int val_y = rand()%100;
		
		array_container[i].x = val_x;
		array_container.at(i).y = val_y;
	}

	// read list
	std::cout << "read list by simple access with loop for(:)"  << std::endl;
	// c++11 give the possibility read struct with for(:)
	for(body & elem : array_container) {
		elem.info();
	}


	return (0);
}
