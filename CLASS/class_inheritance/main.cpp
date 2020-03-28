#include "header.hpp"
#include <iostream>
#include <cstdio>


int main() {
	Body body(21,42);

	std::cout << "x: " << body.get_x() << " y: " << body.get_y()<< std::endl;

	Human human(21,42, "Maurice");

	std::cout << "my name is: " << human.get_name () << " x: " << human.get_x() << " y: " << human.get_y()<< std::endl;


	Body *bh = new Human();
  printf("\nBody *bh = new Human():\n");
	bh->static_talk();
	printf("\nBody *bh= new Human():\n");
	bh->virtual_talk();

	//delete bh;

	return 0;
}
