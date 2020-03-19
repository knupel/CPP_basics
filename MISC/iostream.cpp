#include <iostream>

int main(void) {
	char buff[512];

	std::cout << "Hello world !" << std::endl;

	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entry is: " << buff << " that's correct?" << std::endl;
	return (0);
}