#include <iostream>


void ma_methode(int id);

int main(void) {
	ma_methode(0);
	ma_methode(1);
	ma_methode(2);
	ma_methode(3);
	return (0);
}

void ma_methode(int id) {
	static int val = 11;
	std::cout << "id: " << id << std::endl;
	std::cout << "val: " << val << std::endl;
	val++;
}