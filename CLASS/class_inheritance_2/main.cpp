#include "Mother.hpp"
#include "Child.hpp"
#include <iostream>
#include <cstdio>
#include <vector>


int main() {
	std::vector <Child> v_child;
	Mother mother(21,42);
	std::cout << "mother.get_x(): " << mother.get_x() << " mother.get_y(): " << mother.get_y()<< std::endl;

	Child child(42,84, "Maurice");
	std::cout << "child.get_name(): " << child.get_name() << " child.get_x(): " << child.get_x() << " child.get_y(): " << child.get_y() << std::endl;


	Mother *bh = new Child(); // * is to give the opportunity to convert Mothe to Child
  printf("\nMother *bh = new Child():\n");
	bh->static_talk();
	printf("\nMother *bh = new Child():\n");
	bh->virtual_talk();

	//delete bh;

	return 0;
}
