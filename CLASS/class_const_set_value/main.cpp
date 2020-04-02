#include "C_Good.hpp"
#include <cstdio>

int main() {
	Good good(3.14f);
	printf("%f\n",good.get_num());
	good.set_num(16.3f);
	printf("%f\n",good.get_num());
	return (0);
}