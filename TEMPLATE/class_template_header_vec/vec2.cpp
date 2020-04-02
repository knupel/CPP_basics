
/*
template <class T>
vec2<T>::vec2() : x(0), y(0) {
	std::cout << "Default constructor" << std::endl;
	vec2<T>::instance++;
	return;
}

template <class T>
vec2<T>::vec2(T const &x, T const &y) : x(x), y(y) {
	std::cout << "Parametric constructor" << std::endl;
	vec2<T>::instance++;
	return;
}

template <class T>
vec2<T>::vec2(vec2<T> const & src) x(src.get_x()), y(src.get_y()) {
	std::cout << "Copy constructor" << std::endl;
	vec2<T>::instance++;
	return;
}
	
template <class T>
vec2<T>::~vec2(){
	std::cout << "Destructor" << std::endl;
	vec2<T>::instance--;
	return;
}

template <class T>
vec2<T>::vec2 & operator=(vec2 const & rhs) {
	this->x = rhs.get_x();
	this->y = rhs.get_y();
	return *this;
}
  
// get
template <class T>
static int vec2<T>::get_instance() {
	return vec2::instance;
}

template <class T>
T vec2<T>::get_x() const {
	return this->x;
}

template <class T>
T vec2<T>::get_y() const {
	return this->x;
}




template <class T>
std::ostream & operator<<(std::ostream & out, vec2<T> const & rhs) {
	out << "[ " << rhs.get_x() << ", " << rhs.get_y() << " ]";
	return out;
}


int vec2<T>::instance = 0;


template vec2<int>;
template vec2<float>;
template vec2<double>;
*/

