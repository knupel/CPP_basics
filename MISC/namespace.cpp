#include <stdio.h>

int var = 100;
int func() {
	return (200);
}

namespace Ns {
	int var = 0;
	int func() {
		return (2);
	}
}

namespace Truc = Ns;


int main() {
	printf("sans :: : %i | %i\n", var, func());
	printf("sans :: : %i | %i\n", ::var, ::func());
	printf("avec: %i | %i\n", Ns::var, Ns::func());
	printf("avec alias: %i | %i\n", Truc::var, Truc::func());
	return(1);
}