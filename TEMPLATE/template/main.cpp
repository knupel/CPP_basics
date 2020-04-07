#include <iostream>

// template <typename T>
template <class T>
class vec2 {
private:
	static int instance;
	T x;
	T y;
public:
	vec2() : x(0), y(0) {
		std::cout << "Default constructor" << std::endl;
		vec2<T>::instance++;
		return;
	}

	vec2(T const &x, T const &y) : x(x), y(y) {
		std::cout << "Parametric constructor" << std::endl;
		vec2<T>::instance++;
		return;
	}

	vec2(vec2<T> const & src) : x(src.get_x()), y(src.get_y()) {
		std::cout << "Copy constructor" << std::endl;
		vec2<T>::instance++;
		return;
	}
	
	~vec2(){
		std::cout << "Destructor" << std::endl;
		vec2<T>::instance--;
		return;
	}

	vec2 & operator=(vec2<T> const & rhs) {
		this->x = rhs.get_x();
		this->y = rhs.get_y();
		return *this;
	}
  
  // get
	static int get_instance() {
		return vec2<T>::instance;
	}

	T get_x() const {
		return this->x;
	}

	T get_y() const {
		return this->y;
	}
}; 

template <class T>
std::ostream & operator<<(std::ostream & out, vec2<T> const & rhs) {
	out << "[ " << rhs.get_x() << ", " << rhs.get_y() << " ]";
	return out;
}

template <class T>
int vec2<T>::instance = 0;


int main() {
	vec2<float> a;
	vec2<int> b(21, 42);
	vec2<float> c(21.21f, 42.42f);
	vec2<bool> d(true, false);
	vec2<int> e(b);


	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

	std::cout << "a.get_x(): " << a.get_x() << std::endl;
	std::cout << "a.get_y(): " << a.get_y() << std::endl;

	std::cout << "b.get_x(): " << b.get_x() << std::endl;
	std::cout << "b.get_y(): " << b.get_y() << std::endl;

	std::cout << "c.get_x(): " << c.get_x() << std::endl;
	std::cout << "c.get_y(): " << c.get_y() << std::endl;

	std::cout << "d.get_x(): " << d.get_x() << std::endl;
	std::cout << "d.get_y(): " << d.get_y() << std::endl;

	std::cout << "e.get_x(): " << e.get_x() << std::endl;
	std::cout << "e.get_y(): " << e.get_y() << std::endl;

	a = c;
  printf("a = c\n");
	std::cout << "a.get_x(): " << a.get_x() << std::endl;
	std::cout << "a.get_y(): " << a.get_y() << std::endl;

	return (0);
}
