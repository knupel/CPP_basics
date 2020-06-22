#include "Mother.hpp"
#include <iostream>
#include <cstdio>


int main() {
	Mother mother(21,42);

	std::cout << "x: " << mother.get_x() << " y: " << mother.get_y()<< std::endl;

	Child child(21,42, "Maurice");

	std::cout << "my name is: " << child.get_name () << " x: " << child.get_x() << " y: " << child.get_y()<< std::endl;


	Mother *bh = new Child();
  printf("\nMother *bh = new Child():\n");
	bh->static_talk();
	printf("\nMother *bh = new Child():\n");
	bh->virtual_talk();

	//delete bh;

	return 0;
}
