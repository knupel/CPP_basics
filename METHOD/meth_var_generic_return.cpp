#include <iostream>


template <typename T> T ma_methode(T a, T b, bool is);

int main(void) {
	ma_methode(10,1,true);
	ma_methode('A','B',true);
	ma_methode(12.5,3.6,true);
	std::cout << "result: " << ma_methode(3,2,false) << std::endl;
	// ma_methode(12.5,3.6f); // error the type must be the same
	return (0);
}

template <typename T> T ma_methode(T a, T b, bool is) {
	if(a < b) {
		if(is)
			std::cout << "Typename a: " << a << " is lower to Typename b: " << b << std::endl;
		return(b);
	} else {
		if(is)
			std::cout << "Typename a: " << a << " is upper or qual to Typename b: " << b << std::endl;
		return(a);
	}
}