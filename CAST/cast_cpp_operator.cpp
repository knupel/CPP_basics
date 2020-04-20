#include <cstdio>
// clang++ -std=c++11 main.cpp -Wconversion && ./a.out
// you can use the flag -Wconversion to receive a warning about implicit conversion.

class  Foo {
private:
	float const v;

public:
	Foo (float const v): v(v) {
		//
	}

	float get_value() {
		return this->v;
	}

	operator float() {
		return this->v;
	}

	operator int() {
		return static_cast<int>(this->v);
	}
};

int main() {
	Foo a(42.58f);
	float b = a; // call an implicte cast from the class :)
	int c = a; // call an implicte cast from the class :)
	printf("foo::get_value(): %f\n", a.get_value());
	printf("b: %f\n", b);
	printf("c: %i\n", c);

	return(0);
}