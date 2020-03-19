#include <iostream>
#include <typeinfo>

template <typename TA, typename TB> void ma_methode(TA a, TB b);

int main(void) {
	ma_methode(10,12.5);
	ma_methode('A',12);
	ma_methode(12.5,3.6);
	return (0);
}

template <typename TA, typename TB> void ma_methode(TA a, TB b) {
	std::cout << "Typename a: " << a << " have a type " << typeid(a).name() << std::endl;
	std::cout << "Typename b: " << b << " have a type " << typeid(b).name() << std::endl;
}