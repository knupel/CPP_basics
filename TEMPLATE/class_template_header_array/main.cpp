#include "my_array.tpp"
/**
all the informations to build your class are in the header .tpp
here we use the .tpp instead .hpp to make difference with the classic header .h or .hpp
because the template is something special not an object, not a real class. 
and that's can be good to see the difference in the tree file
*/

int main() {
	MyArray<double,3> ma;
	ma.print();
	return (0);
}
