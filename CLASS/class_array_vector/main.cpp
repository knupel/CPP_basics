#include "R_Body.hpp"
#include <iostream>
#include <vector>


int main() {
	int num = 10;
	std::vector <R_Body> body;
	body.assign(num, R_Body());
	std::cout << "size: " << body.size() << std::endl;
  

  for(R_Body elem : body) {
		std::cout<< elem <<std::endl;
  }
  /*
	for(int i = 0 ; i < body.size() ; i++) {
		body[i] = R_Body();
		std::cout << body[i].get_instance() << std::endl;
	}
	*/
	// return 0;
}
