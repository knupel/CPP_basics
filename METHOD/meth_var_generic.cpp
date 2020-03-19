#include <iostream>


template <typename T> void ma_methode(T a, T b);

int main(void) {
	ma_methode(0,1);
	ma_methode('A','B');
	ma_methode(12.5,3.6); 
	ma_methode(12.5,3.6f); // error the type must be the same, here double vs float
	return (0);
}

template <typename T> void ma_methode(T a, T b) {
	std::cout << "Typename a: " << a << std::endl;
	std::cout << "Typename b: " << b << std::endl;
}