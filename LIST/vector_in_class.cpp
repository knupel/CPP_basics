#include <vector>
#include <iostream>
class Parent {
public:
	std::vector<int> v_list_parent;
};

class Child : public Parent {
public:
	std::vector<int> v_list_child;
	Child() {
		v_list_parent.push_back(1);
		v_list_child.push_back(2);
	}
};

int main() {
	Child child;
	std::cout << "child list: " << child.v_list_child.at(0) << std::endl;
	std::cout << "child parent: "<< child.v_list_parent.at(0) << std::endl;
	return (0);
}