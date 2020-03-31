#include <cstdio>
// clang++ -std=c++11 main.cpp -Wconversion && ./a.out
// you can use the flag -Wconversion to receive a warning about implicit conversion.

class  A {
	//
};

class  B {
	//
};

class  C {
public:
	C(A const & _) {
		return;
	}

	explicit C(B const & _) {
		return;
	}
};

void func(C const & _) {
	return;
}

int main() {
	func(A()); // implicit conversion OK
	func(B()); // implicit conversion KO, because there a keywork explicite in class C
	return(0);
}