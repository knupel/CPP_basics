
#include "R_Body.hpp"

R_Body::R_Body() {
	R_Body::num_instance++;
	return;
}

R_Body::~R_Body() {
	R_Body::num_instance--;
	return;
}

int R_Body::get_instance(){
	return R_Body::num_instance;
}

int R_Body::num_instance = 0;





