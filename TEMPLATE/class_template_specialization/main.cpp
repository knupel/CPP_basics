#include <iostream>

// GENERIC TEMPLATE
template <class L, class R>
class Pair {
private:
	L left;
	R right;
public:
	Pair(L const &left, R const &right) : left(left), right(right) {
		std::cout << "Parametric constructor generic" << std::endl;
		return;
	}
	
	~Pair(){
		std::cout << "Destructor generic" << std::endl;
		return;
	}
  
  // get
	L get_left() const {
		return this->left;
	}

	R get_right() const {
		return this->right;
	}
}; 



// PARTIAL TEMPLATE
template <class R>
// here we need to write where the component is specialize
class Pair <int,R> {
private:
	int left;
	R right;
public:
	Pair(int left, R const &right) : left(left), right(right) {
		std::cout << "Parametric constructor partial" << std::endl;
		return;
	}
	
	~Pair(){
		std::cout << "Destructor partial" << std::endl;
		return;
	}
  
  // get
	int get_left() const {
		return this->left;
	}

	R get_right() const {
		return this->right;
	}
};


// SPECIALIZATION TEMPLATE
template <>
// here we need to write where the component is specialize
class Pair <bool,bool> {
private:
	int store;
public:
	// here we use the int storage to save memory
	// for that we need to work on the bit to store and read information.
	Pair(bool left, bool right) {
		std::cout << "Parametric constructor specialize" << std::endl;
		this->store = 0;
		this->store |= static_cast<int>(left) << 0;
		this->store |= static_cast<int>(right) << 1;
		return;
	}
	
	~Pair(){
		std::cout << "Destructor specialize" << std::endl;
		return;
	}
  
  // get
	bool get_left() const {
		return (this->store & 0x01);
	}

	bool get_right() const {
		return (this->store & 0x02);
	}
};


// print info
template <class L, class R>
std::ostream & operator<<(std::ostream & out, Pair<L,R> const & rhs) {
	out << "[ " << rhs.get_left() << ", " << rhs.get_right() << " ]";
	return out;
}

// here we use the std::boolalpha to display 
// the boolean name false / true instead the number value 0 / 1
std::ostream & operator<<(std::ostream & out, Pair<bool,bool> const & rhs) {
	out << std::boolalpha << "[ " << rhs.get_left() << ", " << rhs.get_right() << " ]";
	return out;
}


int main() {
	Pair<int,int> a(0,0);
	Pair<float, int> b(21.42f, 42);
	Pair<int, int> c(21, 42);
	Pair<bool,bool> d(true, false);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	std::cout << "a.get_left(): " << a.get_left() << std::endl;
	std::cout << "a.get_right(): " << a.get_right() << std::endl;

	std::cout << "b.get_left(): " << b.get_left() << std::endl;
	std::cout << "b.get_right(): " << b.get_right() << std::endl;

	std::cout << "c.get_left(): " << c.get_left() << std::endl;
	std::cout << "c.get_right(): " << c.get_right() << std::endl;

	std::cout << "d.get_left(): " << d.get_left() << std::endl;
	std::cout << "d.get_right(): " << d.get_right() << std::endl;


	a = c;
  printf("a = c\n");
	std::cout << "a.get_left(): " << a.get_left() << std::endl;
	std::cout << "a.get_right(): " << a.get_right() << std::endl;

	return (0);
}
