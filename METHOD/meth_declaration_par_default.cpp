#include <iostream>


void ma_methode(int a, int b = 12);

int main(void) {
	ma_methode(0);
	ma_methode(0,1);
	return (0);
}


void ma_methode(int a, int b) {
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
}