#include <iostream>
#include <cstdio>
#include <bitset>
#include <random>

int main() {

	char a = -58;    
	std::bitset<8> bx(a);
	std::cout << bx << '\n';

	int b = 1234567890;
	std::bitset<16> by(b);
	std::cout << by << '\n';

	printf("random sort\n");
	std::random_device seed;
	std::default_random_engine generator(seed());
	std::uniform_int_distribution<int> distribution(0,1);
	for(int i = 0 ; i < 16 ; i++) {
		bool is = true;
		int number = distribution(generator);
		if(number == 0) {
			is = false;
		}
		std::cout << i << " : " << is << " value random:" << number <<  std::endl;
		b |= static_cast<int>(is) << i;
	}
	std::bitset<16> bz(b);
	std::cout << bz << '\n';

	return(0);
}