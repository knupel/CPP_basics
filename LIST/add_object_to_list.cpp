#include <iostream>
#include <vector>
// http://www.cplusplus.com/reference/vector/vector/
class Body {
	public:
		int x = 0;
		int y = 0;

		Body();
		//~Body();

		void info();
};

Body::Body() {
	std::cout << "Contructor" << std::endl;
	return;
}

// Body::~Body() {
// 	std::cout << "Destructor" << std::endl;
// 	return;
// }

void Body::info() {
	std::cout << "[ " << x << ", " << y << " ]" << std::endl;
}


int main(void) {
	std::vector<Body> container_vector;
	unsigned length = 3;
	// init list
	std::cout << "init list with loop for(;;)"  << std::endl;
	for(unsigned i = 0 ; i < length ; i++) {
		int x = rand()%100;
		int y = rand()%100;
		Body body;
		body.x = x;
		body.y = y;
		container_vector.push_back(body);
	}

	for(Body b : container_vector) {
		b.info();
	}
	return (0);
}